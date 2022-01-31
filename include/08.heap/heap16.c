                    /* we have enough, now allocate them */
                    if (y == bneed)
                    {
                        /* find ID that does not match left or right */
                        nid = k_heapBMGetNID(bm[x - 1], bm[x + y]);
