void init_gdt_entry(size_t num, uint32_t limit, uint32_t base, uint8_t access, uint8_t limit_flags)
{
    gdt[num].limit=limit;
    gdt[num].base1=(base & 0xffff);
    gdt[num].base2=(base & 0xff0000) >> 16;
    gdt[num].access=access;
    gdt[num].limit_flags=limit_flags;
    gdt[num].base3=(base & 0xff000000) >> 24;
}
