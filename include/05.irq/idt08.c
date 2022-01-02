void init_idt_table()
{
    init_pic();
    add_idt_entry(0,(uint32_t)irq0);
    add_idt_entry(1,(uint32_t)irq1);
    add_idt_entry(2,(uint32_t)irq2);
    add_idt_entry(3,(uint32_t)irq3);
    add_idt_entry(4,(uint32_t)irq4);
    add_idt_entry(5,(uint32_t)irq5);
    add_idt_entry(6,(uint32_t)irq6);
    add_idt_entry(7,(uint32_t)irq7);
    add_idt_entry(8,(uint32_t)irq8);
    add_idt_entry(9,(uint32_t)irq9);
    add_idt_entry(10,(uint32_t)irq10);
    add_idt_entry(11,(uint32_t)irq11);
    add_idt_entry(12,(uint32_t)irq12);
    add_idt_entry(13,(uint32_t)irq13);
    add_idt_entry(14,(uint32_t)irq14);
    add_idt_entry(15,(uint32_t)irq15);
    add_idt_entry(16,(uint32_t)irq16);
    add_idt_entry(17,(uint32_t)irq17);
    add_idt_entry(18,(uint32_t)irq18);
    add_idt_entry(19,(uint32_t)irq19);
    add_idt_entry(20,(uint32_t)irq20);
    add_idt_entry(21,(uint32_t)irq21);
    add_idt_entry(22,(uint32_t)irq22);
    add_idt_entry(23,(uint32_t)irq23);
    add_idt_entry(24,(uint32_t)irq24);
    add_idt_entry(25,(uint32_t)irq25);
    add_idt_entry(26,(uint32_t)irq26);
    add_idt_entry(27,(uint32_t)irq27);
    add_idt_entry(28,(uint32_t)irq28);
    add_idt_entry(29,(uint32_t)irq29);
    add_idt_entry(30,(uint32_t)irq30);
    add_idt_entry(31,(uint32_t)irq31);
    add_idt_entry(32,(uint32_t)timer_irq);
    add_idt_entry(33,(uint32_t)keyboard_irq);

    idtp.size=sizeof(struct idt_entry)*256-1;
    idtp.offset=(uint32_t)&idt;


    load_idt(&idtp);
}