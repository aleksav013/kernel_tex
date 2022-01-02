void terminal_putchar(char c)
{
    if(c=='\n') terminal_column=0,terminal_row++;
    else
    {
	terminal_putentryat(c, terminal_color, terminal_column, terminal_row);
	next_field();
    }
    if (terminal_row==VGA_HEIGHT) movescreen();
}
