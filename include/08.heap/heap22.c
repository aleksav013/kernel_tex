void k_heapBMFree(KHEAPBM *heap, void *ptr)
{
    KHEAPBLOCKBM    *b;
    uintptr_t       ptroff;
    uint32_t        bi, x;
    uint8_t         *bm;
    uint8_t         id;
    uint32_t        max;
