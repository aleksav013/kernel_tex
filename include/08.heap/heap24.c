            /* clear allocation */
            id = bm[bi];
            /* oddly.. GCC did not optimize this */
            max = b->size / b->bsize;
            for (x = bi; bm[x] == id && x < max; ++x) bm[x] = 0;
            /* update free block count */
            b->used -= x - bi;
            return;
        }
    }
