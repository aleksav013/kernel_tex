void terminal_writeint(uint32_t num)
{
    char string[100];
    for(int i=0;i<100;i++) string[i]='\0';
    char *str=string;
    itos(num,str);
    terminal_writestring(str);
}
