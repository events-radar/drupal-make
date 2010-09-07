<?php print $fields['start']->content ?>: <?php print $fields['title']->content; ?>
<?php if (isset($fields['rrule'])): ?>
  <span class="repeat"><?php print $fields['rrule']->content; ?></span>
<?php endif; ?>
