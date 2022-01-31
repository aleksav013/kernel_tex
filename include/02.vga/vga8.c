void next_field(void)
{
    if(++terminal_column==VGA_WIDTH) terminal_column=0,terminal_row++;
}
