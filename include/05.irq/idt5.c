void add_idt_entry(size_t num, uint32_t offset)
{
    init_idt_entry(num,offset,KERNEL_CODE,INTERRUPT_GATE_32);
}
