void set_color(enum vga_color fg, enum vga_color bg)
{
    terminal_color = (uint8_t)(fg|bg<<4);
}
