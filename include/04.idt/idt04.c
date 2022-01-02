extern void load_idt(struct idt_pointer *idtp);
extern void keyboard_irq();
struct idt_entry idt[256];
struct idt_pointer idtp;
