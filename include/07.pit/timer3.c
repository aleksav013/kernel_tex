void timer_handler(void)
{
    tick++;
    if(tick==TICKS_PER_SECOND)
    {
        tick=0;
        time++;
    }
