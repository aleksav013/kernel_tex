            for (x = (b->lfb + 1 >= bcnt ? 0 : b->lfb + 1); x != b->lfb; ++x)
            {
                /* just wrap around */
                if (x >= bcnt) x = 0;
