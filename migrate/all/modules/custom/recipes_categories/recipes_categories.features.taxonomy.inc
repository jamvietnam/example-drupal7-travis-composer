<?php
/**
 * @file
 * recipes_categories.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function recipes_categories_taxonomy_default_vocabularies() {
  return array(
    'recipes_categories' => array(
      'name' => 'Recipes Categories',
      'machine_name' => 'recipes_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
