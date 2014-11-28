<?php

/**
 * @file
 *  Hackish solution to remove own group from the entity reference list.
 */
$output = "";

$groups = array();
// Ah the quick fix.
$group_ids = $row->_entity_properties['og_group_ref'];
foreach ($group_ids as $gid) {
  if ($gid == $view->args[0]) {
    // if gid is same as group id in argument skip
    continue;
  }
  $node = entity_load_single('node', $gid);
  $groups[] = l($node->title, 'node/' . $node->nid);
}
if (count($groups)) {
  $output .= implode(', ', $groups);
}
?>
<?php print $output; ?>
