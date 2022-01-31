void *k_heapBMAlloc(KHEAPBM *heap, uint32_t size)
{
    KHEAPBLOCKBM    *b;
    uint8_t         *bm;
    uint32_t        bcnt;
    uint32_t        x, y, z;
    uint32_t        bneed;
    uint8_t         nid;
