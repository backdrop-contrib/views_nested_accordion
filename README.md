
Views Nested Accordion
======================

Views Nested Accordion help in creating nested Accordion. If accordion is
grouped by more then one field then each header will act as accordion for its
inner elelment.

Requirements
------------

  * Views
  * [Views Accordion](https://github.com/backdrop-contrib/views_accordion)


Installation
------------

- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.

- Configure any view under Administration > Structure > Views
  (admin/structure/views) and adjust as follows:
  * Set the Row style to "Fields".
  * Provide at least three fields to show.
  * Set the Style to "Views Nested Accordion", which will prompt you to
    configure the Nested Accordion.
    - The option "Nested Accordion" must be checked for nesting to occur.
    - Set grouping for the display style. When more then one field grouping is
      added then nested Accordion will be implemented.

**IMPORTANT**
Each grouped field will be used as the header for each accordion section. When
the header is clicked, then the inner fields will be displayed. The module
creates an accordion section per row of results from the view. If the first
field includes a link, this link will not function (the js returns false).


Issues
------

Bugs and feature requests should be reported in [the Issue Queue](https://github.com/backdrop-contrib/views_nested_accordion/issues).


Current Maintainers
-------------------

- [Jen Lampton](https://github.com/jenlampton).
- Seeking additional maintainers.


Credits
-------

- Ported to Backdrop CMS by [Jen Lampton](https://github.com/jenlampton).
- Originally written for Drupal by [Anil Kumar](https://www.drupal.org/u/anil280988).


License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.
