#!/bin/sh

rm -rf "01.pocetak" "02.vga" "03.gdt" "04.idt" "05.irq" "06.keyboard" "07.pit" "08.heap" "09.paging" "10.libc"

mkdir "01.pocetak" "02.vga" "03.gdt" "04.idt" "05.irq" "06.keyboard" "07.pit" "08.heap" "09.paging" "10.libc"

cp ../../mykernel/src/as/boot.s ./01.pocetak
cd 01.pocetak || exit
awk -v RS= '{print > ("boot" NR ".s")}' boot.s
cd ..

cp ../../mykernel/src/c/vga.c ./02.vga
cd 02.vga || exit
awk -v RS= '{print > ("vga" NR ".c")}' vga.c
cd ..

cp ../../mykernel/src/c/gdt.c ./03.gdt
cp ../../mykernel/src/include/source/gdt.h ./03.gdt
cd 03.gdt || exit
awk -v RS= '{print > ("gdt" NR ".c")}' gdt.c
awk -v RS= '{print > ("gdt" NR ".h")}' gdt.h
cd ..

cp ../../mykernel/src/include/source/idt.h ./04.idt
cd 04.idt || exit
awk -v RS= '{print > ("idt" NR ".h")}' idt.h
cd ..

cp ../../mykernel/src/c/idt.c ./05.irq
cd 05.irq || exit
awk -v RS= '{print > ("idt" NR ".c")}' idt.c
cd ..

cp ../../mykernel/src/c/keyboard.c ./06.keyboard
cd 06.keyboard || exit
awk -v RS= '{print > ("keyboard" NR ".c")}' keyboard.c
cd ..

cp ../../mykernel/src/c/timer.c ./07.pit
cd 07.pit || exit
awk -v RS= '{print > ("timer" NR ".c")}' timer.c
cd ..

cp ../../mykernel/src/c/heap.c ./08.heap
cd 08.heap || exit
awk -v RS= '{print > ("heap" NR ".c")}' heap.c
cd ..

cp ../../mykernel/src/c/paging.c ./09.paging
cd 09.paging || exit
awk -v RS= '{print > ("paging" NR ".c")}' paging.c
cd ..

cp -r ../../mykernel/src/include/* ./10.libc
