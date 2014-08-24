<?php

/**
 * @file
 * OG Radar groups selection handler.
 */

class OgRadarSelectionHandler extends OgSelectionHandler {

  public static function getInstance($field, $instance = NULL, $entity_type = NULL, $entity = NULL) {
    return new self($field, $instance, $entity_type, $entity);
  }

  /**
   * Build an EntityFieldQuery to get referencable entities.
   */
  public function buildEntityFieldQuery($match = NULL, $match_operator = 'CONTAINS') {
    global $user;

    $handler = EntityReference_SelectionHandler_Generic::getInstance($this->field, $this->instance, $this->entity_type, $this->entity);
    $query = $handler->buildEntityFieldQuery($match, $match_operator);

    // FIXME: http://drupal.org/node/1325628
    unset($query->tags['node_access']);

    // FIXME: drupal.org/node/1413108
    unset($query->tags['entityreference']);

    $query->addTag('entity_field_access');
    $query->addTag('og');

    $group_type = $this->field['settings']['target_type'];
    $entity_info = entity_get_info($group_type);

    if (!field_info_field(OG_GROUP_FIELD)) {
      // There are no groups, so falsify query.
      $query->propertyCondition($entity_info['entity keys']['id'], -1, '=');
      return $query;
    }

    // Show only the entities that are active groups.
    $query->fieldCondition(OG_GROUP_FIELD, 'value', 1, '=');

    if (empty($this->instance['field_mode'])) {
      return $query;
    }

    // If this is a request field then show the og that the user can't post into.
    // This is the same behaviour as the admin field. Which makes the admin version
    // of the field suck a bit, but first use case covered.
    $field_mode = $this->instance['field_mode'];
    $field_mode = $this->field['settings']['handler_settings']['membership_type'] == 'og_group_request' ? 'admin' : $field_mode;

    // If user has permission to edit entity, let the values stay the same.
    $field_groups = array();
    if (! empty($this->entity)) {
      $wrapper = entity_metadata_wrapper($this->entity_type, $this->entity);
      $field_groups = $wrapper->{$this->field['field_name']}->raw();
    }

    $anon_groups = $this->getGidsForCreate();

    $user_groups = og_get_groups_by_user(NULL, $group_type);
    $user_groups = $user_groups ? $user_groups : array();

    // SQL for groups that a non-member can post into:-
    // select gid from og_role_permission inner join og_role on og_role.rid =
    // og_role_permission.rid where og_role_permission.permission = 'create
    // $bundle_type content' AND og_role.name = 'non-member';

    // Show the user only the groups they belong to.
    if ($field_mode == 'default') {
      if ($user_groups && !empty($this->instance) && $this->instance['entity_type'] == 'node') {
        // Determine which groups should be selectable.
        $node = $this->entity;
        $node_type = $this->instance['bundle'];
        $ids = array();
        foreach ($user_groups as $gid) {
          // Check if user has "create" permissions on those groups.
          // If the user doesn't have create permission, check if perhaps the
          // content already exists and the user has edit permission.
          if (og_user_access($group_type, $gid, "create $node_type content")) {
            $ids[] = $gid;
          }
          elseif (!empty($node->nid) && (og_user_access($group_type, $gid, "update any $node_type content") || ($user->uid == $node->uid && og_user_access($group_type, $gid, "update own $node_type content")))) {
            $node_groups = isset($node_groups) ? $node_groups : og_get_entity_groups('node', $node->nid);
            if (in_array($gid, $node_groups['node'])) {
              $ids[] = $gid;
            }
          }
        }
      }
      else {
        $ids = $user_groups;
      }
      // Add groups that the user can post into. Add existing groups even if
      // user otherwise couldn't post.
      $ids = array_merge($ids, $anon_groups, $field_groups);
      if ($ids) {
        $query->propertyCondition($entity_info['entity keys']['id'], $ids, 'IN');
      }
      else {
        // User doesn't have permission to select any group so falsify this
        // query.
        $query->propertyCondition($entity_info['entity keys']['id'], -1, '=');
      }
    }
    elseif ($field_mode == 'admin') {
      // Don't show groups the user can post into.
      if (!empty($this->instance) && $this->instance['entity_type'] == 'node') {
        $node_type = $this->instance['bundle'];
        foreach ($user_groups as $delta => $gid) {
          if (og_user_access($group_type, $gid, "create $node_type content")) {
            unset($user_groups[$delta]);
          }
        }
      }

      $ids = array_merge($user_groups, $anon_groups);

      // But remove the group that the field is already posted in, that can be
      // still listed even if the user can post into it.
      foreach ($field_groups as $gid) {
        unset($ids[$gid]);
      }

      if ($ids) {
        $query->propertyCondition($entity_info['entity keys']['id'], $ids, 'NOT IN');
      }
    }
    return $query;
  }

  /**
   * Get group IDs from URL or OG-context, with access to create group-content.
   *
   * The query is already requiring an IN() to include groups that a user is a
   * member of. We also require groups the user is not a member of but that
   * allow posting by non-members.
   *
   * At some point this IN() is going to be too large. It would be a simple
   * join, but for the requirement of adding the groups that the user is a
   * member of. Phh... and then it doesn't say they can post to them.
   * Getting the values out of audience fields on a user though is another
   * query, or some interesting entity field query joinage?
   *
   * SOLUTION when this BREAKS because the query is TOO LARGE:
   * override getReferencableEntities and build own query from scratch,
   * at the same time countReferencableEntities and
   * validateReferencableEntities need to use the same query (results).
   *
   * @return
   *   Array with group IDs a user (member or non-member) is allowed to
   * create, or empty array.
   */
  private function getGidsForCreate() {
    if ($this->instance['entity_type'] != 'node') {
      return array();
    }

    $node_type = $this->instance['bundle'];

    $query = db_query(
      'SELECT gid FROM {og_role_permission} p INNER JOIN {og_role} r ON r.rid = p.rid where p.permission = :permission AND r.name = :role_name',
      array(':permission' => "create $node_type content", 'role_name' => 'non-member'));
    $ids = $query->fetchCol();
    return $ids;
  }

}
