void init_gdt_entry(size_t num, uint16_t limit, uint32_t base, uint8_t access,
        uint8_t limit_flags);
void init_gdt_table(void);
