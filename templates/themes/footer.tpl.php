<footer role="contentinfo">
  <div class="container">
    <?php if ($footer_left || $footer_right || $footer): ?>
      <section class="region region-footer-left"><?php print render($footer_left); ?></section>
      <section class="region region-footer-right"><?php print render($footer_right); ?></section>
      <section class="region region-footer"><?php print render($footer); ?></section>
    <?php endif; ?>
  </div>
</footer>
<section class="under-footer">
  <?php print theme('sl7_copyright'); ?>
</section>