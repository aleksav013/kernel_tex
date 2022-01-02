void init_idt_entry(size_t num, uint32_t offset, uint16_t selector, uint8_t type_attr)
{
    idt[num].offset1=(offset & 0xffff);
    idt[num].selector=selector;
    idt[num].zero=0;
    idt[num].type_attr=type_attr;
    idt[num].offset2=(offset & 0xffff0000)>>16;
}
