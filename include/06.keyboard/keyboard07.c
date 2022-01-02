void backspace()
{
    if(buffer_index<=0) return;

    deletelast();
    buffer[buffer_current][--buffer_index]='\0';
    return;
}
