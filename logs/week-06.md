## Measured
- Code attempts: - 2
- Command attempts:- 1

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

## const pointers

Predicted 6/8 correctly. Both misses were the middle two rows.

|                        | *p = 100 | p = &y  |
|------------------------|----------|---------|
| int *p                 | OK       | OK      |
| const int *p           | error    | OK      |
| int *const p           | OK       | error   |
| const int *const p     | error    | error   |

Rule: const BEFORE the * locks the target; const AFTER the * locks the
pointer. gcc's wording gives it away — "read-only location *p2" vs
"read-only variable p3".

Why it matters: a status register is `volatile const uint32_t *` — hardware
writes it, I may only read. Wrong side of the * and the compiler lets me
write to read-only hardware.

## Function pointers

`int (*op)(int,int)` = op is a pointer to a function taking two ints and
returning int. Parentheses are compulsory: `int *op(int,int)` means a
function returning int*.

`int (*ops[5])(int,int)` = an array of 5 such pointers. Calling ops[i](12,4)
selects the function by INDEX — the decision became data instead of code.
Added avg() myself as a fifth entry: one array element, no new branch.

Array length derived with sizeof(ops)/sizeof(ops[0]) so the count lives in
one place. That idiom only works where the array is real — inside a function
it decays to a pointer and gives 1.

`void (*handler)(void)` is the type of an interrupt vector table entry.
Week 13 is writing that table by hand.

Function pointer -> void* is NOT guaranteed by ISO C (-Wpedantic warns).
On Harvard machines like the team's AVR, code and data are separate address
spaces — which is why PROGMEM exists in Arduino.

## write_field verified — 5/5

| # | Setup                  | Result                                    |
|---|------------------------|-------------------------------------------|
| 1 | reg = 0                | value landed at bits 10-11                |
| 2 | reg = 0xFFFFFFFF       | only 2 bits changed, other 30 survived    |
| 3 | field = 11, with clear | became 01                                 |
| 4 | field = 11, OR only    | STAYED 11 — value never landed            |
| 5 | value = 7, 2-bit field | clamped by & mask, bit 12 untouched       |

3 vs 4 is the whole lesson: OR cannot turn bits off, so a field must be
cleared before writing. This is the bug I had in the RM0390 drill on 10 Oct,
where OR-only appeared to work because the field happened to start at 00.

## RM0390 / datasheet drill #2 — 13 minutes (drill #1 was 18m30s)

PA13 = JTMS-SWDIO, PA14 = JTCK-SWCLK, PA15 = JTDI.

GPIOA_MODER resets to 0xA8000000 = 1010 1000 ...
  pin15 bits 31-30 = 10 (AF)
  pin14 bits 29-28 = 10 (AF)
  pin13 bits 27-26 = 10 (AF)
  pin12 bits 25-24 = 00 (input)
Not zero because ST leaves the debug pins configured out of reset.

If firmware reconfigures PA13/PA14 as GPIO, SWD stops existing: the ST-LINK
can't connect, and flashing is impossible because flashing also goes over SWD.
The board looks bricked.
Recovery: connect-under-reset (ST-LINK halts the core in the window before
main runs), or pull BOOT0 high so the factory bootloader runs instead of my
code. Lesson: software can lock you out of hardware.

## Measured
- Code attempts: ←
- Command attempts: ←
- Predictions: const 6/8, write_field 5/5, drill 2/3

## Still unclear
- Register work in general is still abstract without the board. Scheduled:
  toolchain 16-20 Nov, first LED 18-24 Dec, GPIO measured 25-31 Dec.