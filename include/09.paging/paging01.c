extern void loadPageDirectory(uint32_t*);
extern void enablePaging();
uint32_t page_directory[1024] __attribute__((aligned(4096)));
