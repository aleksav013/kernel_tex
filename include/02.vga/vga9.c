void previous_field(void)
{
    if(terminal_column) terminal_column--;
    else terminal_row--,terminal_column=VGA_WIDTH-1;
}
