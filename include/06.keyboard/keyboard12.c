void keyboard_handler()
{
    ioport_out(PIC1_COMMAND_PORT, 0x20);
    uint8_t status = ioport_in(KEYBOARD_STATUS_PORT);

    if (status & 0x1)
    {
	uint8_t keycode = ioport_in(KEYBOARD_DATA_PORT);
	if(keycode<0x80)
	{
	    ispressed[keycode]=1;
	    if(keycode==0x0E) backspace();
	    else if(keycode==0x1C) enter();
	    else if(keycode==0x39) space();
	    else if(keycode==72) keyup();
	    else if(keycode==80) keydown();
	    else if(keycode==75) keyleft();
	    else if(keycode==77) keyright();
	    else
	    {
		char c=charcode[keycode];
		if(c!=' ')
		{
		    if(lctrl)
		    {
			if(c=='l')
			{
			    clear();
			    prompt();
			    printf("%s",buffer[buffer_current]);
			    return;
			}
		    }
		    if(lshift||rshift)
		    {
			c=shift_charcode[keycode];
		    }
		    buffer[buffer_current][buffer_index++]=c;
		    printf("%c",c);
		}
	    }
	}
	else
	{
	    ispressed[keycode-0x80]=0;
	}
    }
}
