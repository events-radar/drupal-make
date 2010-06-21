// $Id: grid.js,v 1.1.2.3.2.4 2010/02/07 19:08:59 psynaptic Exp $

Drupal.behaviors.clean_grid = function(context) {
  var $grid_image = Drupal.settings.clean.theme_path + 'images/grid' + Drupal.settings.clean.columns + '.png';
  var $theme_key = Drupal.settings.clean.theme_key;
  var $default_state = Drupal.settings.clean.default_state;

  $("body").prepend('<img src="' + $grid_image + '" id="clean-grid" class="' + $default_state + ' ' + $theme_key + '" />');
  $('body').prepend('<a href="#" id="clean-grid-toggle" class="' + $default_state + '">GRID</a>');
  
  $('#clean-grid-toggle').click(function() {
    $('#clean-grid, #clean-grid-toggle').toggleClass('grid-disabled').toggleClass('grid-enabled');
  });
};
