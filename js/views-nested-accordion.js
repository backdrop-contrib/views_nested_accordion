/**
 * @file
 * JS for Nested Accordion.
 */
Drupal.behaviors.views_nested_accordion = {
  attach: function(context) {
    if(Drupal.settings.views_nested_accordion){
      (function ($) {
       
        $.each(Drupal.settings.views_nested_accordion, function(id) {
          /* Our Nested Accordion Settings */
          var viewname = this.viewname;
          $( '.view-id-' + viewname + ' .view-grouping:first-child .view-grouping-header' ).addClass('nested-accordion');
          $( '.view-id-' + viewname + ' .view-grouping .view-grouping-header' ).click(function() {

                  var attrib = $(this).attr("class");
                  var remove = attrib.split(" ");
                  if (remove[1] == 'nested-accordion') {//alert(remove[1]);
                    $(this).removeClass("nested-accordion");
                    $(this).siblings('.view-grouping-content').slideUp();
                  } else {
                    $(this).addClass('nested-accordion');
                    $(this).siblings('.view-grouping-content').slideDown();
                    $(this).parents('.view-grouping').siblings('.view-grouping').children('.view-grouping-header').removeClass('nested-accordion');
                    $(this).parents('.view-grouping').siblings('.view-grouping').children('.view-grouping-content').slideUp();
                  }
          
          });    
        });
      })(jQuery);
    }
  }
};
