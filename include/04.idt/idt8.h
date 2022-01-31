void init_idt_entry(size_t num, uint32_t offset, uint16_t selector, uint8_t
        type_attr);
void add_idt_entry(size_t num,uint32_t offset);
void init_pic(void);
void init_idt_table(void);
