void *k_heapBMAlloc(KHEAPBM *heap, uint32_t size) {
	KHEAPBLOCKBM			*b;
	uint8_t				*bm;
	uint32_t			bcnt;
	uint32_t			x, y, z;
	uint32_t			bneed;
	uint8_t				nid;
 
	/* iterate blocks */
	for (b = heap->fblock; b; b = b->next) {
	    //printf("size:%d,used:%d,bsize:%d,lfb:%d\n",b->size,b->used,b->bsize,b->lfb);
		/* check if block has enough room */
		if (b->size - (b->used * b->bsize) >= size) {
 
			bcnt = b->size / b->bsize;		
			bneed = (size / b->bsize) * b->bsize < size ? size / b->bsize + 1 : size / b->bsize;
			bm = (uint8_t*)&b[1];
			//printf("bcnt:%d,bneed:%d,bm:%d\n",bcnt,bneed,bm);
 
			for (x = (b->lfb + 1 >= bcnt ? 0 : b->lfb + 1); x != b->lfb; ++x) {
				/* just wrap around */
				if (x >= bcnt) {
					x = 0;
				}		
 
				if (bm[x] == 0) {	
					/* count free blocks */
					for (y = 0; bm[x + y] == 0 && y < bneed && (x + y) < bcnt; ++y);
 
					/* we have enough, now allocate them */
					if (y == bneed) {
						/* find ID that does not match left or right */
						nid = k_heapBMGetNID(bm[x - 1], bm[x + y]);
 
						/* allocate by setting id */
						for (z = 0; z < y; ++z) {
							bm[x + z] = nid;
						}
 
						/* optimization */
						b->lfb = (x + bneed) - 2;
 
						/* count used blocks NOT bytes */
						b->used += y;
 
						return (void*)(x * b->bsize + (uintptr_t)&b[1]);
					}
 
					/* x will be incremented by one ONCE more in our FOR loop */
					x += (y - 1);
					continue;
				}
			}
		}
	}
 
	return 0;
}
