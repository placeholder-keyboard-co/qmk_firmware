const char m_diffuse[] PROGMEM = {
0x00, 0xE0, 0xFC, 0xFE, 0xFE, 0x3F, 0x1F, 0xFF, 0xFE, 0xFC, 0xFC, 0x1E, 0x1F, 0xFF, 0xFF, 0xFF,
0xFE, 0x0C, 0xFC, 0xFF, 0xFF, 0x7F, 0x07, 0xE0, 0xFE, 0xFF, 0xFF, 0x3F, 0x03, 0xE0, 0xFF, 0xFF,
0xFF, 0x1F, 0x01, 0x00};

const char m_alpha[] PROGMEM = {
0x00, 0xE0, 0xFC, 0xFE, 0xFE, 0x3F, 0x1F, 0xFF, 0xFE, 0xFC, 0xFC, 0x1E, 0x1F, 0xFF, 0xFF, 0xFF,
0xFE, 0x0C, 0xFC, 0xFF, 0xFF, 0x7F, 0x07, 0xE0, 0xFE, 0xFF, 0xFF, 0x3F, 0x03, 0xE0, 0xFF, 0xFF,
0xFF, 0x1F, 0x01, 0x00};

sprite_t m_sprite = {
  .size = { .x = 18, .y = 16 },
  .diffuse = m_diffuse,
  .alpha = m_alpha
};

glyph_t m_glyph = {
  .value = 'm',
  .sprite = &m_sprite
};
