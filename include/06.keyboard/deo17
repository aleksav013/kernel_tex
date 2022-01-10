    if (status & 0x1)
    {
        uint8_t keycode = ioport_in(KEYBOARD_DATA_PORT);
        if(keycode<0x80)
        {
            char c=charcode[keycode];
            ispressed[keycode]=1;
            // printf("%d ",&keycode);
