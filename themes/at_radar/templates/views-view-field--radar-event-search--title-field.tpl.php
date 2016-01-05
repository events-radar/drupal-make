<?php

/**
 * @file
 *  Hackish solution to remove content types from the entity reference list.
 */
$output = '<h4 class="event-list-event-title" property="schema:name">' . $output . '</h4>';

$groups = array();
// Ah the quick fix.
$group_ids = $row->_entity_properties['og_group_ref'];
// Think it's been loaded and cached anyway by the field handler, which
// is probably where this should be done.
foreach ($group_ids as $gid){
  $node = entity_load_single('node', $gid);
  if ($node->type == 'group') {
    // If it's a group well put it in.
    $groups[] = l(
      '<span property="schema:name">' . check_plain($node->title) . '</span>',
      'node/' . $node->nid,
      array(
        'attributes' => array('property' => 'schema:url'),
        'html' => TRUE
      )
    );
  }
}
$groups_string = '';
if (count($groups) > 1) {
  foreach ($groups as $delta => $group) {
    $groups[$delta] = '<span property="itemListElement" typeof="Organization">' . $group . '</span>';
  }
  $groups_string = implode(', ', $groups);
  $groups_string = '<span property="schema:organizer" typeof="itemList">' . $groups_string . '</span>';
}
else {
  $groups_string = '<span property="schema:organizer" typeof="Organization">' . $groups[0] . '</span>';
}
if ($groups_string) {
  $output .= '<span class="group"> ~ ' . $groups_string . '</span>';
}

print $output;
