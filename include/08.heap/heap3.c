int k_heapBMAddBlock(KHEAPBM *heap, uintptr_t addr, uint32_t size, uint32_t
        bsize)
{
    KHEAPBLOCKBM        *b;
    uint32_t            bcnt;
    uint32_t            x;
    uint8_t             *bm;
