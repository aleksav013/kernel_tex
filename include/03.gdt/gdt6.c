    init_gdt_entry(0,0,0,0,0);              // null segment
    init_gdt_entry(1,0xffff,0,0x9a,0xcf);   // code segment
    init_gdt_entry(2,0xffff,0,0x92,0xcf);   // data segment
    init_gdt_entry(3,0xffff,0,0xfa,0xcf);   // user mode code segment
    init_gdt_entry(4,0xffff,0,0xf2,0xcf);   // user mode data segment
