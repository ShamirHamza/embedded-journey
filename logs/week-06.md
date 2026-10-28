## volatile — W06

**The rule:** `volatile` tells the compiler that a variable can change
outside the visible flow of the program — by hardware, by an interrupt,
by another thread — so it must reload it from memory on every access and
never optimise the access away.

**Same C source, three builds:**

-O0 (no optimisation) — reads memory every pass:
.L2:
    movl    flag(%rip), %eax
    testl   %eax, %eax
    je      .L2

-O2, no volatile — read hoisted out, loop reads nothing, can never exit:
    movl    flag(%rip), %eax     <- once, before the loop
    testl   %eax, %eax
    je      .L3
.L3:
    jmp     .L3

-O2, volatile — read is back inside the loop:
.L2:
    movl    flag(%rip), %eax
    testl   %eax, %eax
    je      .L2

**Where it bites:** polling a hardware status register (ADC end-of-conversion,
UART ready) or a flag set by an interrupt. Without volatile the code compiles
clean, often works at -O0, and hangs forever in the optimised build you ship.

**Needs volatile:** every hardware register pointer; every global written by
an ISR and read by main; delay loops that only count.

**Note:** I got volatile wrong on the September diagnostic.