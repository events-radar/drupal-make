<?php // $Id: fieldset.tpl.php,v 1.1.2.2 2009/12/30 17:03:25 psynaptic Exp $ ?>
<?php print $pre; ?>

<div <?php print drupal_attributes($attr); ?>>

  <?php if ($title): ?>
    <h2 class='fieldset-title'>
      <?php print $title; ?>
    </h2>
  <?php endif; ?>

  <?php if ($content): ?>
    <div class='fieldset-content clear-block'>
      <?php print $content; ?>
    </div>
  <?php endif; ?>
</div>

<?php print $post; ?>
