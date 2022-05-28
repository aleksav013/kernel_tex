                default:
                    if(c!=' ')
                    {
                        if(ispressed[lctrl]||ispressed[rctrl])
                        {
                            if(c=='l')
                            {
                                clear();
                                prompt();
                                printf("%s",buffer[buffer_current]);
                                return;
                            }
                        }
                        if(ispressed[lshift]||ispressed[rshift])
                        {
                            c=shift_charcode[keycode];
                        }
