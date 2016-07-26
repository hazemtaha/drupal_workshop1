<?php
/**
 * @file
 * feature_testing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_testing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_testing_node_info() {
  $items = array(
    'feature_testing_type' => array(
      'name' => t('Feature Testing Type'),
      'base' => 'node_content',
      'description' => t('This is a features module testing content type'),
      'has_title' => '1',
      'title_label' => t('FTT'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
