            bcnt = b->size / b->bsize;
            bneed = (size / b->bsize) * b->bsize < size ? size / b->bsize + 1 :
                size / b->bsize;
            bm = (uint8_t*)&b[1];
