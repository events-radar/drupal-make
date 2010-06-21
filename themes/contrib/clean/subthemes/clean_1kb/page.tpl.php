<?php // $Id: page.tpl.php,v 1.1.2.4 2010/05/13 13:24:00 adrinux Exp $ ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html<?php print drupal_attributes($html_attr); ?>>

<head>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <title><?php print $head_title; ?></title>
</head>

<body<?php print drupal_attributes($attr); ?>>

  <?php if ($header): ?>
    <div id="header">
      <div class="row clear-block">
        <div<?php print drupal_attributes($full_grid_attr); ?>>
          <?php print $header; ?>
        </div>        
      </div>
    </div>
  <?php endif; ?>

  <div id="branding">
    <div class="row clear-block">
      <div<?php print drupal_attributes($full_grid_attr); ?>>
        <?php print $logo_themed; ?>
        <?php print $site_name_themed; ?>
        <?php print $site_slogan_themed; ?>
        <?php print $mission_themed; ?>
        <?php print $search_box; ?>
      </div>
    </div>
  </div>

  <div id="navigation">
    <div class="row clear-block">
      <div<?php print drupal_attributes($full_grid_attr); ?>>
        <?php print $skip_link; ?>
        <?php print $primary_links; ?>
        <?php print $secondary_links; ?>
        <?php print $breadcrumb; ?>
      </div>
    </div>
  </div>

  <div id="page">
    <div class="row clear-block">
      <div<?php print drupal_attributes($main_attr); ?>>
        <div class="row clear-block">

          <?php if ($left): ?>
            <div<?php print drupal_attributes($left_attr); ?>>
              <?php print $left; ?>
            </div>
          <?php endif; ?>

          <div<?php print drupal_attributes($content_attr); ?>>
            <?php print $tabs; ?>
            <?php print $messages; ?>
            <?php print $help; ?>

            <?php if ($title): ?>
              <h1 class="page-title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php print $content; ?>
          </div>

          <?php if ($right): ?>
            <div<?php print drupal_attributes($right_attr); ?>>
              <?php print $right; ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
    </div>
  </div>

  <div id="footer">
    <div class="row clear-block">
      <div<?php print drupal_attributes($full_grid_attr); ?>>
        <?php print $feed_icons; ?>
        <?php print $footer; ?>
        <?php print $footer_message; ?>
      </div>
    </div>
  </div>

  <?php print $closure; ?>
</body>
</html>
