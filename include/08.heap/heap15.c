                if (bm[x] == 0)
                {
                    /* count free blocks */
                    for (y = 0; bm[x + y] == 0 && y < bneed && (x + y) < bcnt;
                            ++y);
