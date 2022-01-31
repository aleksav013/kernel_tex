code:
    movw $DATA_SEGMENT, %ax
    movw %ax, %ds
    movw %ax, %es
    movw %ax, %fs
    movw %ax, %gs
    movw %ax, %ss
    movl $stack_top, %esp
    cli
    call _init
    call kernel_main
    hlt
