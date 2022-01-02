void k_heapBMFree(KHEAPBM *heap, void *ptr) {
	KHEAPBLOCKBM		*b;	
	uintptr_t		ptroff;
	uint32_t		bi, x;
	uint8_t			*bm;
	uint8_t			id;
	uint32_t		max;
 
	for (b = heap->fblock; b; b = b->next) {
		if ((uintptr_t)ptr > (uintptr_t)b && (uintptr_t)ptr < (uintptr_t)b + sizeof(KHEAPBLOCKBM) + b->size) {
			/* found block */
			ptroff = (uintptr_t)ptr - (uintptr_t)&b[1];  /* get offset to get block */
			/* block offset in BM */
			bi = ptroff / b->bsize;
			/* .. */
			bm = (uint8_t*)&b[1];
			/* clear allocation */
			id = bm[bi];
			/* oddly.. GCC did not optimize this */
			max = b->size / b->bsize;
			for (x = bi; bm[x] == id && x < max; ++x) {
				bm[x] = 0;
			}
			/* update free block count */
			b->used -= x - bi;
			return;
		}
	}
 
	/* this error needs to be raised or reported somehow */
	return;
}
