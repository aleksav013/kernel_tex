void init_pic(void)
{
    ioport_out(PIC1_COMMAND_PORT, 0x11);
    ioport_out(PIC2_COMMAND_PORT, 0x11);
    ioport_out(PIC1_DATA_PORT, 0x20);
    ioport_out(PIC2_DATA_PORT, 0x28);
    ioport_out(PIC1_DATA_PORT, 0x04);
    ioport_out(PIC2_DATA_PORT, 0x02);
    ioport_out(PIC1_DATA_PORT, 0x01);
    ioport_out(PIC2_DATA_PORT, 0x01);
    ioport_out(PIC1_DATA_PORT, 0xff);
    ioport_out(PIC2_DATA_PORT, 0xff);
    ioport_out(PIC1_DATA_PORT, 0xFC);
}
