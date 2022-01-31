void init_timer(uint32_t frequency)
{
    uint32_t divisor = 1193180 / frequency;
    ioport_out(0x43, 0x36);
