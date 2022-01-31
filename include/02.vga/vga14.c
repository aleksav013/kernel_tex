void clear(void)
{
    for(size_t i=0;i<VGA_HEIGHT;i++) for(size_t j=0;j<VGA_WIDTH;j++)
        terminal_putchar(' ');
    terminal_column=0;
    terminal_row=0;
}
