<?php
// $Id: panels_layouts.inc,v 1.3 2010/10/11 22:56:02 sdboyer Exp $

$plugin = array(
  'schema' => 'panels_layout',
  'access' => 'administer panels layouts',

  'menu' => array(
    'menu prefix' => 'admin/structure/panels',
    'menu item' => 'layouts',
    'menu title' => 'Layouts',
    'menu description' => 'Add, edit or delete custom content layouts.',
  ),

  'title singular' => t('layout'),
  'title singular proper' => t('Layout'),
  'title plural' => t('layouts'),
  'title plural proper' => t('Layouts'),

  'class' => 'panels_layouts_ui',
);

