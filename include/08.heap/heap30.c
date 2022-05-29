void kfree(void *ptr)
{
    k_heapBMFree(&kheap,ptr);
}
