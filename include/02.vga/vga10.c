void terminal_writestring(char* data)
{
    for(int i=0;data[i]!='\0';i++) terminal_putchar(data[i]);
}
