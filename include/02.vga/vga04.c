void terminal_initialize()
{
    terminal_row=0;
    terminal_column=0;
    set_color(VGA_COLOR_LIGHT_GREY, VGA_COLOR_BLACK);
    terminal_buffer=(uint16_t*) 0xB8000;
    for(size_t y=0;y<VGA_HEIGHT;y++)
    {
	for(size_t x=0;x<VGA_WIDTH;x++)
	{
	    const size_t index=y*VGA_WIDTH+x;
	    terminal_buffer[index]=vga_entry(' ', terminal_color);
	}
    }
}
