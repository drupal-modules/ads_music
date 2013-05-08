<?php
/**
 * @file
 * ads_music_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ads_music_content_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ads_music_content_types_node_info() {
  $items = array(
    'band' => array(
      'name' => t('Band'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'instrument' => array(
      'name' => t('Instrument'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'orchestra' => array(
      'name' => t('Orchestra'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gig' => array(
      'name' => t('Gig'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
