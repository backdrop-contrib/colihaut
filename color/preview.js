
(function ($) {
  Backdrop.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Change the logo to be the real one.
      if (!this.logoChanged) {
        $('#preview #preview-logo img').attr('src', Backdrop.settings.color.logo);
        this.logoChanged = true;
      }
      // Remove the logo if the setting is toggled off. 
      if (Backdrop.settings.color.logo == null) {
        $('div').remove('#preview-logo');
      }

      // Header background.
      $('#preview-header', form).css('backgroundColor', $('#palette input[name="palette[top]"]', form).val());

      // Body background.
      $('#preview-wrap', form).css('backgroundColor', $('#palette input[name="palette[bodybg]"]', form).val());

      // Page background.
      $('#preview-main', form).css('backgroundColor', $('#palette input[name="palette[pagebg]"]', form).val());

      // Page titles.
      $('#preview #preview-page-title', form).css('color', $('#palette input[name="palette[nodeheader]"]', form).val());
      
      // Text preview.
      $('#preview .preview-content', form).css('color', $('#palette input[name="palette[text]"]', form).val());
      
      // Links
      $('#preview #preview-content a', form).css('color', $('#palette input[name="palette[link]"]', form).val());

      // Footer wrapper background.
      $('#preview #preview-footer-wrapper', form).css('background-color', $('#palette input[name="palette[footer]"]', form).val());

      $('#preview #preview-site-name', form).css('color', $('#palette input[name="palette[titleslogan]"]', form).val());
    }
  };
})(jQuery);
