<?php
/**
 * @file
 * Views plugin handler. Contains all relevant options and related logic.
 */

/**
 * Extends View Accordion Style Plugin.
 */
class Views_Nested_Accordion_Style_Plugin extends views_accordion_style_plugin {
  /**
   * Returns setting options.
   */
  public function option_definition() {
    // Call parent method so that default functionality not override.
    $options = parent::option_definition();
    $options['nestedaccordion'] = array('default' => 0);
    return $options;
  }

  /**
   * Provide the default form for setting options.
   */
  public function options_form(&$form, &$form_state) {
    // Call parent method so that default functionality not override.
    parent::options_form($form, $form_state);
    $form['nestedaccordion'] = array(
      '#type' => 'checkbox',
      '#title' => t('Nested Accordion'),
      '#default_value' => $this->options['nestedaccordion'],
      '#description' => t("If set, nested accordion will be implemented."),
      '#weight' => -1,
    );
  }

  /**
   * Pre_render() necessary to prevent markup mayhem.
   */
  public function pre_render($result) {
    parent::pre_render($result);
  }

  /**
   * Render the display in this style.
   */
  public function render() {
    $output = parent::render();
    $view_settings['viewname'] = $this->view->name;
    $view_settings['nestedaccordion'] = $this->options['nestedaccordion'];
    if ($this->options['nestedaccordion'] == '1') {
      drupal_add_js(drupal_get_path('module', 'views_nested_accordion') . '/js/views-nested-accordion.js');
      drupal_add_css(drupal_get_path('module', 'views_nested_accordion') . '/css/views-nested-accordion.css');
    }
    drupal_add_js(array('views_nested_accordion' => array('nestedaccordion' => $view_settings)), 'setting');
    return $output;
  }
}
