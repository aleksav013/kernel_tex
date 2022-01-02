KHEAPBM kheap;
void kheapinit()
{
    k_heapBMInit(&kheap);
}
int kheapaddblock(uintptr_t addr,uint32_t size,uint32_t bsize)
{
    return k_heapBMAddBlock(&kheap,addr,size,bsize);
}
