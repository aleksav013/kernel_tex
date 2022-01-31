.section .text
.global _start
.type _start, @function
_start:
    call init_gdt_table
    ljmp $CODE_SEGMENT, $code
