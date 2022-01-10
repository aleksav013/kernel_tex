void keyup()
{
    if(buffer_current>0)
    {
        buffer_size[buffer_current]=buffer_index;
        for(size_t i=0;i<buffer_index;i++) deletelast();
        buffer_current--;
        buffer_index=buffer_size[buffer_current];
        printf("%s",buffer[buffer_current]);
    }
}
