(function($) {

  /**
   * Toggle opening hours
   */
  function toggle_opening_hours() {
    // Create toggle link
    $('<a />', {
      'class' : 'opening-hours-toggle js-opening-hours-toggle js-collapsed',
      'href' : Drupal.t('#toggle-opening-hours'),
      'text' : Drupal.t('Opening hours')
    }).insertBefore('.js-opening-hours-toggle-element');

    // Set variables
    var element = $('.js-opening-hours-toggle');
    var siteHeader = $('.site-header');
    var scrollOffset;
    var scrollToTarget;

    // Attach click
    element.on('click touchstart', function(event) {
      // Store clicked element for later use
      var element = this;

      // Toggle
      $(this).next('.js-opening-hours-toggle-element').slideToggle('fast', function() {
        // Toggle class
        $(element).toggleClass('js-collapsed js-expanded');

        scrollToTarget = $(element);
        scrollOffset = scrollToTarget.height()*2;
        $.scrollTo(scrollToTarget, 500, {
          offset: -scrollOffset,
          axis: 'y'
        });

        // Remove focus from link
        $(element).blur();
      });

      // Prevent default (href)
      event.preventDefault();
    });
  }

  // When ready start the magic.
  $(document).ready(function () {
    // Toggle opening hours.
    toggle_opening_hours();

    // Toggle footer menu.
    $('.footer .pane-title').on('click', function() {
      var element = $(this).parent();
      $('.menu', element).toggle();
      $(this).toggleClass('js-toggled');
    });
  });

})(jQuery);
