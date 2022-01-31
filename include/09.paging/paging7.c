    //we will fill all 1024 entries in the table, mapping 4 megabytes
    for(size_t i=0;i<1024;i++)
    {
        // As the address is page aligned, it will always leave 12 bits zeroed.
        // Those bits are used by the attributes ;)
        page_table[num][i] = (address + i * 0x1000) | 3; // attributes:
        supervisor level, read/write, present.
    }
