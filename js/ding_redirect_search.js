
(function ($) {

  /**
   * Handle the submit of a search block. If the chosen type of search has a
   * redirect URL, redirect the user to it.
   */
  Drupal.behaviors.ding_redirect_search_form_submit = {
    attach: function (context, settings) {
      $('#search-block-form input[type="submit"]', context).click(function(e) {
        var choosen_search = $('#search-block-form input[name=ding_redirect_redirect_radios]:checked').val();

        // Get settings for showing a dialog.
        var delay        = settings.ding_redirect.delay || -1,
            dialog_title = settings.ding_redirect.dialog_title,
            dialog_text  = settings.ding_redirect.dialog_text;

        if (settings.ding_redirect[choosen_search] !== '') {
          // Redirect the user to the new URL from settings. Add the query to
          // the URL.
          var url = settings.ding_redirect[choosen_search],
              query = $('#search-block-form input[type="text"]').val();
          url = url.replace('%QUERY%', query);

          if (delay > 0) {
            // Pop a dialog when there is a delay on redirect.
            var canceled = false;
            var $dialog = $('<div class="os2web-redirect-modal">' + dialog_text + '</div>').dialog({
              'modal': true,
              'title': dialog_title,
              'closeText' : Drupal.t('close'),
              'close': function(event, ui) {
                canceled = true;
                $dialog.dialog('destroy').remove();
              }
            });
            setTimeout(function(){
              if (!canceled) {
                $dialog.dialog('destroy').remove();
                window.location = url;
              }
            }, delay);
          } else {
            // No dialog and delay used, redirect user.
            window.location = url;
            e.preventDefault();
            return false;
          }
        }
      });
    }
  };

})(jQuery);
