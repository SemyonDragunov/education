<?php

/**
 * @author Semyon Dragunov <sam.dragunov@gmail.com>
 * https://github.com/SemyonDragunov
 */

$info = array();

$info['fields'] = array(
  'main' => 'Основной цвет',
  'second' => 'Вторичный цвет',
  'text' => '',
  'link' => '',
  'blend_target' => '',
  'base' => '',
  'palette' => '',
);

$info['schemes'] = array(
  'default' => array(
    'title' => 'По-умолчанию',
    'colors' => array(
      'main' => '#018763',
      'second' => '#1eaace',
    ),
  ),
);

$info['css'] = array('color/color.css');
$info['copy'] = array();
$info['preview_css'] = 'color/preview.css';
$info['preview_js'] = 'color/preview.js';
$info['preview_html'] = 'color/preview.html';
$info['gradients'] = array();
$info['fill'] = array();
$info['slices'] = array();
$info['base_image'] = 'color/base.png';