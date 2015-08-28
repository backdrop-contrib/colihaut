<?php

// Put the logo path into JavaScript for the live preview.
backdrop_add_js(array('color' => array('logo' => theme_get_setting('logo', 'colihaut'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'top' => t('Header background'),
    'bodybg' => t('Main background'),
    'pagebg' => t('Page background'),
    'footer' => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'nodeheader' => t('Article Header'),
    'link' => t('Link color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Deep Blue (default)'),
      'colors' => array(
        'top' => '#0779bf',
        'bodybg' => '#f2f2f2',
        'pagebg' => '#ffffff',
        'footer' => '#292929',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'nodeheader' => '#0779bf',
        'link' => '#0071B3',
      ),
    ),
    'green' => array(
      'title' => t('Grass Green'),
      'colors' => array(
        'top' => '#259824',
        'bodybg' => '#f2f2f2',
        'pagebg' => '#ffffff',
        'footer' => '#1f1d1c',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'nodeheader' => '#259824',
        'link' => '#259824',
      ),
    ),
    'brown' => array(
      'title' => t('Earth Brown'),
      'colors' => array(
        'top' => '#985624',
        'bodybg' => '#f2f2f2',
        'pagebg' => '#ffffff',
        'footer' => '#24272c',
        'titleslogan' => '#fffeff',
        'text' => '#4a4a4a',
        'nodeheader' => '#985624',
        'link' => '#985624',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(),

  // Gradient definitions.
  'gradients' => array(),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
