void enter()
{
    printf("\n");
    if(buffer_index>0)
    {
        tty(buffer[buffer_current]);
        buffer_size[buffer_current]=buffer_index;
        if(buffer_current==buffer_all) buffer_current=(++buffer_all);
        else
        {
            for(size_t i=0;i<BUFFER_SIZE;i++) buffer[buffer_all][i]='\0';
            buffer_current=buffer_all;
        }
        buffer_index=0;
    }
    prompt();
    return;
}
