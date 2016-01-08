<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
// Reorder a bit: Move long events that have started down.
$result_rows = array_intersect_key($view->result, array_flip(array_keys($rows)));
uksort(
  $rows,
  function ($a, $b) use ($result_rows) {
    return radar_event_sort_day_events($a, $b, $result_rows);
  }
);
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <article vocab="http://schema.org/" typeof="Event" property="schema:event" inlist="" <?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </article>
<?php endforeach; ?>
