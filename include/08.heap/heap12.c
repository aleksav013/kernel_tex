    /* iterate blocks */
    for (b = heap->fblock; b; b = b->next)
    {
        /* check if block has enough room */
        if (b->size - (b->used * b->bsize) >= size)
        {
