<?php // $Id: page.tpl.php,v 1.1.2.1.2.7 2010/05/13 13:24:00 adrinux Exp $ ?>
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

  <div id="page">
    <div id="page-inner">

      <?php if ($header): ?>
        <div id="header">
          <?php print $header; ?>
        </div>          
      <?php endif; ?>
      
      <div id="branding">
        <?php print $logo_themed; ?>
        <?php print $site_name_themed; ?>
        <?php print $site_slogan_themed; ?>
        <?php print $mission_themed; ?>
        <?php print $search_box; ?>
      </div>

      <div id="navigation">
        <?php print $skip_link; ?>
        <?php print $primary_links; ?>
        <?php print $secondary_links; ?>
        <?php print $breadcrumb; ?>
      </div>

      <div id="main" class="clear-block">

        <?php if ($left): ?>
          <div id="left" class="sidebar">
            <div class="squeeze">
              <?php print $left; ?>
            </div>
          </div>
        <?php endif; ?>

        <div id="content">
          <div class="squeeze">
            <?php print $tabs; ?>
            <?php print $messages; ?>
            <?php print $help; ?>

            <?php if ($title): ?>
              <h1 class="page-title"><?php print $title; ?></h1>
            <?php endif; ?>

            <?php print $content; ?>
          </div>
        </div>

        <?php if ($right): ?>
          <div id="right" class="sidebar">
            <div class="squeeze">
              <?php print $right; ?>
            </div>
          </div>
        <?php endif; ?>

      </div>

      <div id="footer">
        <?php print $feed_icons; ?>
        <?php print $footer; ?>
        <?php print $footer_message; ?>
      </div>

    </div>
  </div>

  <?php print $closure; ?>
</body>
</html>
