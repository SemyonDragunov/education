<?php if ($top_footer_left || $top_footer_right || $top_footer_center): ?>
  <section class="top-footer">
    <div class="container">
      <section class="region region-top-footer-left"><?php print render($top_footer_left); ?></section>
      <section class="region region-top-footer-center"><?php print render($top_footer_center); ?></section>
      <section class="region region-top-footer-right"><?php print render($top_footer_right); ?></section>
    </div>
  </section>
<?php endif; ?>