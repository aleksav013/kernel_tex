void init_gdt_table()
{
    gdtp.size=sizeof(gdt)-1;
    gdtp.offset=(uint32_t)&gdt;

    init_gdt_entry(0,0,0,0,0);					// null segment
    init_gdt_entry(1,0xffffffff,0,0b10011010,0b11001111);	// code segment
    init_gdt_entry(2,0xffffffff,0,0b10010010,0b11001111);	// data segment
    init_gdt_entry(3,0xffffffff,0,0b11111010,0b11001111);	// user mode code segment
    init_gdt_entry(4,0xffffffff,0,0b11110010,0b11001111);	// user mode data segment

    load_gdt(&gdtp);
}