static inline uint16_t vga_entry(char uc, uint8_t color);
static inline uint16_t vga_entry(char uc, uint8_t color)
{
    return (uint16_t)(uc|color<<8);
}
