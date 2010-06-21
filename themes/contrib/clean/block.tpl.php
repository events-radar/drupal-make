<?php // $Id: block.tpl.php,v 1.1.2.2.2.1.2.2 2009/12/30 17:03:25 psynaptic Exp $ ?>
<?php print $pre; ?>

<div <?php print drupal_attributes($attr); ?>>

  <?php if ($title): ?>
    <h2 class="block-title"><?php print $title; ?></h2>
  <?php endif; ?>

  <div class="block-content clear-block">
    <?php print $content; ?>
  </div>
</div>

<?php print $post; ?>
