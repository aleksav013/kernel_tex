void movescreen()
{
    terminal_row--;
    for(size_t i=0;i<VGA_HEIGHT;i++) for(size_t j=0;j<VGA_WIDTH;j++) terminal_buffer[i*VGA_WIDTH+j]=terminal_buffer[(i+1)*VGA_WIDTH+j];
}
