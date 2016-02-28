<?php

/**
 * @file
 *  Hackish solution to remove content types from the entity reference list.
 *  Also removes the current group.
 */
$this_gid = $view->args[0];
$this_group_type = $view->current_display == 'panel_pane_1' ? 'group' : 'listings_group';

$output = '<h4 class="event-list-event-title" property="schema:name">' . $output . '</h4>';

$groups = array();
// Ah the quick fix.
$group_ids = $row->_entity_properties['og_group_ref'];
// Think it's been loaded and cached anyway by the field handler, which
// is probably where this should be done.
foreach ($group_ids as $gid){
  if ($gid == $this_gid) {
    continue;
  }
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
elseif (count($groups)) {
  $groups_string = '<span property="schema:organizer" typeof="Organization">' . $groups[0] . '</span>';
}
if ($groups_string && $this_group_type == 'group') {
  $output .= '<span class="group"> ';
  $output .= format_plural(
    count($groups),
    'with !group',
    'with !groups',
    array('!group' => $groups_string, '!groups' => $groups_string)
  );
  $output .= '</span>';
}
elseif ($groups_string && $this_group_type == 'listings_group') {
  $output .= '<span class="group"> ~ ' . $groups_string . '</span>';
}

print $output;
