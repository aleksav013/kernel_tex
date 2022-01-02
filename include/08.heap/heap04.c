int k_heapBMAddBlock(KHEAPBM *heap, uintptr_t addr, uint32_t size, uint32_t bsize) {
	KHEAPBLOCKBM		*b;
	uint32_t		bcnt;
	uint32_t		x;
	uint8_t			*bm;
 
	b = (KHEAPBLOCKBM*)addr;
	b->size = size - sizeof(KHEAPBLOCKBM);
	b->bsize = bsize;
 
	b->next = heap->fblock;
	heap->fblock = b;
 
	bcnt = b->size / b->bsize;
	bm = (uint8_t*)&b[1];
 
	/* clear bitmap */
	for (x = 0; x < bcnt; ++x) {
			bm[x] = 0;
	}
 
	/* reserve room for bitmap */
	bcnt = (bcnt / bsize) * bsize < bcnt ? bcnt / bsize + 1 : bcnt / bsize;
	for (x = 0; x < bcnt; ++x) {
			bm[x] = 5;
	}
 
	b->lfb = bcnt - 1;
 
	b->used = bcnt;
 
	return 1;
}
