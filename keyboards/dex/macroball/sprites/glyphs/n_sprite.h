const char n_diffuse[] PROGMEM = {
0x00, 0xE0, 0xFC, 0xFE, 0xFE, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFE, 0x1C, 0xFC, 0xFF, 0xFF, 0x7F,
0x07, 0xE0, 0xFE, 0xFF, 0xFF, 0x3F, 0x03, 0x00};

const char n_alpha[] PROGMEM = {
0x00, 0xE0, 0xFC, 0xFE, 0xFE, 0x3F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFE, 0x1C, 0xFC, 0xFF, 0xFF, 0x7F,
0x07, 0xE0, 0xFE, 0xFF, 0xFF, 0x3F, 0x03, 0x00};

sprite_t n_sprite = {
  .size = { .x = 12, .y = 16 },
  .diffuse = n_diffuse,
  .alpha = n_alpha
};

glyph_t n_glyph = {
  .value = 'n',
  .sprite = &n_sprite
};
