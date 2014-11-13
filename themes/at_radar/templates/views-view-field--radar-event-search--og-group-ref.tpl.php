<?php

/**
 * @file
 *  Hackish solution to remove content types from the entity reference list.
 */
$output = '';
$groups = array();

// Ah the quick fix.
$group_ids = $row->_entity_properties[$field->field_alias];
// Think it's been loaded and cached anyway by the field handler, which
// is probably where this should be done.
foreach ($group_ids as $gid){
  $node = entity_load_single('node', $gid);
  if ($node->type == 'group') {
    // If it's a group well put it in.
    $groups[] = l($node->title, 'node/' . $node->nid);
  }
}
if (count($groups)) {
  $output = implode(', ', $groups);
  $output = " @ <strong>$output</strong>";
}
?>
<?php print $output; ?>
