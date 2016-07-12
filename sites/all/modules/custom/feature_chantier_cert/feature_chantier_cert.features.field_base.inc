<?php
/**
 * @file
 * feature_chantier_cert.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_chantier_cert_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_diaporama'.
  $field_bases['field_diaporama'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_diaporama',
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  return $field_bases;
}
