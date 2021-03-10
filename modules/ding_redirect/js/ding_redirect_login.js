(function ($) {
  "use strict";

  /**
   * Handle the click on the login link. If redirect URL are used, redirect the
   * user to it. This file are only added, if an URL are provided.
   */
  Drupal.behaviors.ding_redirect_login = {
    attach: function (context, settings) {
      // Get all settings from Drupal.
      var login_url = settings.ding_redirect.login_url,
          delay = settings.ding_redirect.delay,
          dialog_title = settings.ding_redirect.dialog_title,
          dialog_text = settings.ding_redirect.dialog_text;

      var wrapper = $('.topbar-link-user .js-topbar-link-user').not('.default-override');

      if (wrapper.length !== 0) {
        $('a.js-topbar-link-user', context).click(function (e) {
          e.preventDefault();

          if (delay > 0) {
            // Pop a dialog when there is a delay on redirect.
            var canceled = false;
            var $dialog = $('<div class="ding-redirect-modal">' + dialog_text + '</div>').dialog({
              'modal': true,
              'title': dialog_title,
              'closeText': Drupal.t('close'),
              'close': function () {
                canceled = true;
                $dialog.dialog('destroy').remove();
              }
            });

            setTimeout(function () {
              if (!canceled) {
                $dialog.dialog('destroy').remove();
                window.location = login_url;
              }
            }, delay);
          }
          else {
            // No dialog and delay used, redirect user.
            window.location = login_url;
          }
        });
      }
    }
  };
})(jQuery);
