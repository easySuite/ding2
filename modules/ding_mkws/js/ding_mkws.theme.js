/**
 * @file
 * Represents functionality which relates to theme.
 */
'use strict';
var ding_mkws_process = {};

/**
 * Function designed to call functions in given order.
 * @param url
 * @returns {*}
 */
Drupal.mkwsProcessExternalUrl = function (url, target) {
  var process_callbacks = Drupal.settings.mkwsPreprocessExternalUrlCallbacks;
  process_callbacks.forEach(function(item, i, process_callbacks) {
    var urlCallback = window[item];

    if (typeof urlCallback === 'function') {
      url = urlCallback(url, target);
    }
  });

  return url;
};

(function ($) {

  ding_mkws_process.ProcessDataForNodeWidget = function(data, params) {
    var variables = {
      title: params.title,
      items: {left: [], right: []},
      more_text: Drupal.t('See all results'),
      more_link: params.query
    };
    for (var i = 0; i < data.hits.length; i++) {
      var idx = (i % 2) ? 'left' : 'right';
      var out = {};
      var url = '';
      try {
        if (typeof data.hits[i].location !== 'undefined' && data.hits[i].location.length > 1) {
          var temp_location = [];
          for (var j = 0; j < data.hits[i].location.length; j++) {
            temp_location.push(data.hits[i].location[j]['@name']);
          }
          out.target = temp_location.join(', ');
        }
        else {
          out.target = data.hits[i].location[0]['@name'];
        }

        out.title = (data.hits[i]['md-title'].length > 1)
          ? data.hits[i]['md-title'].join(', ')
          : data.hits[i]['md-title'];

        // Concatenate author names if more than one.
        out.author = (typeof data.hits[i]['md-author'] !== 'undefined' && data.hits[i]['md-author'].length > 1)
          ? data.hits[i]['md-author'].join(', ')
          : data.hits[i]['md-author'];

        out.date = (typeof data.hits[i]['md-date'] !== 'undefined' && data.hits[i]['md-date'].length > 1)
          ? data.hits[i]['md-date'].join(', ')
          : data.hits[i]['md-date'];

        if (data.hits[i]['md-electronic-url'] !== undefined) {
          url = data.hits[i]['md-electronic-url'][0];
        }
        else if (data.hits[i]['md-bibliofil-url'] !== undefined) {
          url = data.hits[i]['md-bibliofil-url'][0];
        }
        else {
          url = false;
        }
      }
      catch (e){
        console.log(e);
      }
      finally {
        if (url !== false) {
          out['url'] = Drupal.mkwsProcessExternalUrl(url, out['target']);
        }
        variables.items[idx].push(out);
      }
    }

   return variables;
  };

  ding_mkws_process.ProcessDataForPaneWidget = function(data, params) {
    var variables = {
      title: params.title,
      items: [],
      more_text: Drupal.t('See all results'),
      more_link: params.query
    };

    for (var i = 0 ; i < data.hits.length; i++) {
      var out = {};
      var url = '';

      try {
        if (typeof data.hits[i].location !== 'undefined' && data.hits[i].location.length > 1) {
          var temp_location = [];
          for (var j = 0; j < data.hits[i].location.length; j++) {
            temp_location.push(data.hits[i].location[j]['@name']);
          }
          out.target = temp_location.join(', ');
        }
        else {
          out.target = data.hits[i].location[0]['@name'];
        }

        out.title = (data.hits[i]['md-title'].length > 1)
          ? data.hits[i]['md-title'].join(', ')
          : data.hits[i]['md-title'];

        // Concatenate author names if more than one.
        out.author = (typeof data.hits[i]['md-author'] !== 'undefined' && data.hits[i]['md-author'].length > 1)
          ? data.hits[i]['md-author'].join(', ')
          : data.hits[i]['md-author'];

        out.date = (typeof data.hits[i]['md-date'] !== 'undefined' && data.hits[i]['md-date'].length > 1)
          ? data.hits[i]['md-date'].join(', ')
          : data.hits[i]['md-date'];

        if (data.hits[i]['md-electronic-url'] !== undefined) {
          url = data.hits[i]['md-electronic-url'][0];
        }
        else if (data.hits[i]['md-bibliofil-url'] !== undefined) {
          url = data.hits[i]['md-bibliofil-url'][0];
        }
        else {
          url = false;
        }
      }
      catch (e){
        console.log(e);
      }
      finally {
        if (url !== false) {
          out['url'] = Drupal.mkwsProcessExternalUrl(url, out['target']);
        }
        variables.items.push(out);
      }
    }

    if (data.hits.length === 0) {
      variables.title = "";
    }

    return variables;
  };

  $.templates("dingMkwsNodeWidget", "" +
    "<div class='ding-mkws-widget ding-mkws-widget-node'>" +
      "{{if title}}" +
      "<div class='ding-mkws-title'>{{:title}}</div>" +
      "{{/if}}"+
      "<div class='ding-mkws-content'>" +
        "<div class='ding-mkws-left'>" +
          "<ul>{{for items.left}}" +
            "<li>" +
              "<div class='ding-mkws-header'>" +
                "{{if target}}" +
                  "<p class='ding-mkws-target'>" +
                    Drupal.t('Target') +
                  "</p>" +
                "{{/if}}" +
                "{{if title}}" +
                  "<p class='ding-mkws-title'>" +
                    Drupal.t('Title') +
                  "</p>" +
                "{{/if}}" +
                "{{if author}}" +
                  "<p class='ding-mkws-author'>" +
                    Drupal.t('Author') +
                  "</p>" +
                "{{/if}}" +
                "{{if data}}" +
                  "<p class='ding-mkws-date'>" +
                    Drupal.t('Date') +
                  "</p>" +
                "{{/if}}" +
              "</div>" +
              "<div class='ding-mkws-values'>" +
                "{{if target}}" +
                  "<p class='ding-mkws-target'>" +
                    '{{:target}}' +
                  "</p>" +
                "{{/if}}" +
                "{{if title}}" +
                  "{{if url}}" +
                    "<a class='ding-mkws-title' href='{{:url}}' target='_blank'>" +
                      '{{:title}}' +
                    "</a>" +
                    "{{else}}" +
                    "<p class='ding-mkws-title'>" +
                      '{{:title}}' +
                    "</p>" +
                  "{{/if}}" +
                "{{/if}}" +
                "{{if author}}" +
                  "<p class='ding-mkws-author'>" +
                    '{{:author}}' +
                  "</p>" +
                "{{/if}}" +
                "{{if date}}" +
                  "<p class='ding-mkws-date'>" +
                    '{{:date}}' +
                  "</p>" +
                "{{/if}}" +
              "</div>" +
            "</li>"+
          "{{/for}}</ul>" +
        "</div>" +
        "<div class='ding-mkws-rigt'>" +
          "<ul>{{for items.right}}" +
            "<li>" +
              "<div class='ding-mkws-header'>" +
                "{{if target}}" +
                  "<p class='ding-mkws-target'>" +
                    Drupal.t('Target') +
                  "</p>" +
                "{{/if}}" +
                "{{if title}}" +
                  "<p class='ding-mkws-title'>" +
                    Drupal.t('Title') +
                  "</p>" +
                "{{/if}}" +
                "{{if author}}" +
                  "<p class='ding-mkws-author'>" +
                    Drupal.t('Author') +
                  "</p>" +
                "{{/if}}" +
                "{{if date}}" +
                  "<p class='ding-mkws-date'>" +
                    Drupal.t('Date') +
                  "</p>" +
                "{{/if}}" +
              "</div>" +
              "<div class='ding-mkws-values'>" +
                "{{if target}}" +
                  "<p class='ding-mkws-target'>" +
                    '{{:target}}' +
                  "</p>" +
                "{{/if}}" +
                "{{if title}}" +
                  "{{if url}}" +
                    "<a class='ding-mkws-title' href='{{:url}}' target='_blank'>" +
                      '{{:title}}' +
                    "</a>" +
                  "{{else}}" +
                    "<p class='ding-mkws-title'>" +
                      '{{:title}}' +
                    "</p>" +
                  "{{/if}}" +
                "{{/if}}" +
                "{{if author}}" +
                  "<p class='ding-mkws-author'>" +
                    '{{:author}}' +
                  "</p>" +
                "{{/if}}" +
                "{{if date}}" +
                  "<p class='ding-mkws-date'>" +
                    '{{:date}}' +
                   "</p>" +
                "{{/if}}" +
              "</div>" +
            "</li>"+
          "{{/for}}</ul>" +
        "</div>" +
      "</div>" +
      "<a class='ding-mkws-more-link' href='/search/meta/{{:more_link}}'>{{:more_text}}</a>" +
    "</div>");

  $.templates("dingMkwsPaneWidget", "" +
    "<div class='ding-mkws-widget ding-mkws-widget-node'>" +
      "{{if title}}" +
        "<div class='ding-mkws-title'>{{:title}}</div>" +
      "{{/if}}"+
      "<div class='ding-mkws-content'>" +
        "<ul>{{for items}}" +
          "<li>" +
            "<div class='ding-mkws-header'>" +
              "{{if target}}" +
                "<p class='ding-mkws-target'>" +
                  Drupal.t('Target') +
                "</p>" +
              "{{/if}}" +
              "{{if title}}" +
                "<p class='ding-mkws-name'>" +
                  Drupal.t('Title') +
                "</p>" +
              "{{/if}}" +
              "{{if author}}" +
                "<p class='ding-mkws-author'>" +
                  Drupal.t('Author') +
                "</p>" +
              "{{/if}}" +
              "{{if date}}" +
                "<p class='ding-mkws-date'>" +
                  Drupal.t('Date') +
                "</p>" +
              "{{/if}}" +
            "</div>" +
            "<div class='ding-mkws-values'>" +
              "{{if target}}" +
                "<p class='ding-mkws-target'>" +
                  '{{:target}}' +
                "</p>" +
              "{{/if}}" +
              "{{if title}}" +
                "{{if url}}" +
                  "<a class='ding-mkws-title' href='{{:url}}' target='_blank'>" +
                    '{{:title}}' +
                  "</a>" +
                "{{else}}" +
                  "<p class='ding-mkws-title'>" +
                    '{{:title}}' +
                  "</p>" +
                "{{/if}}" +
              "{{/if}}" +
              "{{if author}}" +
                "<p class='ding-mkws-author'>" +
                  '{{:author}}' +
                "</p>" +
              "{{/if}}" +
              "{{if date}}" +
                "<p class='ding-mkws-date'>" +
                  '{{:date}}' +
                "</p>" +
              "{{/if}}" +
            "</div>" +
          "</li>"+
        "{{/for}}</ul>" +
      "</div>" +
      "<a href='/search/meta/{{:more_link}}'>{{:more_text}}</a>" +
    "</div>");
})(jQuery);
