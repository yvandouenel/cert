<?php
/**
 * @file
 * feature_chantier_cert.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_chantier_cert_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_summary|node|chantier|teaser';
  $field_group->group_name = 'group_title_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'chantier';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group titre resume',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_image_scald',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group titre resume',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-summary field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title_summary|node|chantier|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('group titre resume');

  return $field_groups;
}
