# Week 05 — 19-25 Oct 2026
**Rhythm:** term, 4 h planned
**Hours actually spent:** ←  6 hrs 
**Note:** W04 (12-18 Oct) went entirely to the robotics team. Pointers kept
two weeks by moving structs into the winter block.

## What I predicted
- `*p` → I said it would print an address. WRONG: prints 42, the contents.
  I had mapped "pointer" to "address" and missed that `*` is an action.
- `p` == `&a`? → I said yes. RIGHT.
- `&p` a new address? → I said yes. RIGHT.
- `a` after `*p = 99` → I said 99. RIGHT.
- Array address gaps → I said 4 bytes. RIGHT, but my reason was wrong:
  I said "because of the loop". It's because sizeof(int) is 4.
- `arr` vs `&arr[0]` → I said different. WRONG: identical.
- Where `p` ends after a 5-iteration `p++` loop → I said i[4], and inside
  the array. WRONG on both: one element past the end.
- Step size for char/int/double +1 → no prediction recorded (ran it first).
  Actual: 1, 4, 8.

**Score: 4 right, 3 wrong, 1 not predicted.**

## What I did
- addr.c — addresses, dereference, array decay
- ptrmath.c — stride by type, walking an array with p++
- fswap.c — fixed in place with pointers, same file, committed as a change
- NOT done: the five write_field tests from W03
- NOT done: the PA13/14/15 datasheet answer

## What I measured
- Code attempts: addr.c 1, ptrmath.c 1, fswap.c 2
- Command attempts: 0 errors
- First-try: 2 / 3

## Mechanisms, in my own words
- Why `a` became 99 without naming `a`: ← p holds a’s address. *p = 99 means “go to the address stored in p and write 99 there.” That address is where a lives, so writing there writes into a’s storage. The name a was never needed — only its location.
- What `arr` actually is, and why scanf("%s", name) needs no &: ← : an array name is not a box holding the elements; in an expression it becomes the address of element 0. The name in scanf("%s", name); doesn't need & because it already holds the address and putting an & sign will mean address of the address. 
- What gets copied into swap() now, and why that fixes it: ← The swap() now gets the address of the a and b that user inputs.C always passes by value. swap now receives a copy of the address of x. A copy of an address still leads to the original, so dereferencing it reaches main’s variable.
- Why `p + 1` moves 4 bytes for int and 1 for char: ← Because that depends on the size of the data type used. sizeof(int) is 4 bytes while for sizeof(char) is only 1 byte.

## What broke, and the root cause
- First fswap attempt still passed values. I created p1 and p2 in main but
  wrote `swap(*p1, *p2)` — the `*` dereferences straight back to the value,
  so the function received copies exactly as in September. The signature
  was also still `int a, int b`. All three pieces have to change together.
- My test could not detect failure. I printed x and y before the call and
  the swapped values inside the function, but never x and y after the call.
  The output would have looked identical whether the swap worked or not.

## My failure mode (third occurrence)
`n-- > 0` ended at -1. `fib` overwrote `a` before using it. `p++` ran a
fifth time. Every one: I stop tracing at the last *useful* step instead of
the last *executed* one.
Fix: when tracing a loop, always write one extra row for the state after
the condition fails.

## Facts to keep
- `arr` == `&arr[0]`. An array name becomes the address of element 0.
- `arr[i]` is literally `*(arr + i)`.
- `p + 1` advances by sizeof(*p) bytes, not 1 byte.
- Forming a one-past-the-end pointer is legal; dereferencing it is not.
- C always passes by value. To modify a caller's variable you pass its
  address by value and dereference inside.

## What I still cannot explain
- I still jhave a bit of confusion in pointers with respect to dereferencing. 
- Pointers are still a bit tough thing to crack 

## Prediction for next week
- Next week I’ll get at least 6 of 8 predictions right, and const/volatile code first-try on 2 of 3 programs.