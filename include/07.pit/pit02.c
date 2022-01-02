void timer_handler()
{
    tick++;
    if(tick==TICKS_PER_SECOND)
    {
	//printf("%d seconds passed\n",time);
	tick=0;
	time++;
    }

    ioport_out(0x20, 0x20);
    ioport_out(0xa0,0x20);
}
