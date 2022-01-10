void set_paging()
{
    set_pd();
    for(size_t i=0;i<1024;i++) set_pt(i,0x00400000 * i); // all 4GB mapped
    loadPageDirectory(page_directory);
    enablePaging();
}
