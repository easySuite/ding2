(function ($) {
  "use strict";

  $(document).ready(function () {
    $('.ding_nodelist-carousel').each(function() {
      var classes = $(this).attr('class').split(' ');
      var delay = 0;
      // Find pane's ID to get its delay settings.
      $(classes).each(function(i, item){
        if (item.match(/pane\-\d+/)) {
          delay = parseInt(Drupal.settings.ding_nodelist[item]);
        }
      });
      
      $(this).find('.ding_nodelist-items').slick({
        nextArrow: '<i class="fa fa-next"></i>',
        prevArrow: '<i class="fa fa-prev"></i>',
        autoplay: true,
        autoplaySpeed: 2000,
        responsive: true,
        dots: true,
        infinite: true,
        slidesToScroll: 1,
        slidesToShow: 1,
        customPaging: function(slick, index) {
          return '<a>' + (index + 1) + '</a>';
        }
      });
    });
  });
})(jQuery);
