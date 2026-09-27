# Week 01 — 21-27 Sep 2026
**Rhythm:** term, 8 h planned
**Hours actually spent:** 18 hrs

## What I predicted
- 5/9 → I said 0.555556. Reality: 0
- float x = 5/9 → I said 0.555. Reality: 0.000000
- float y = 5.0/9 → I said 0.5. Reality: 0.555556
- (float)5/9 → didn't know. Reality: 0.555556
- if (a=0) with input 7 → ← what I expected / what happened
- Day 3 prediction: at least 3 of 5 first-try. Actual: ←

## What I did
- D1 (21 Sep): hello, add, c2f, circle
- D2 (22 Sep): largest3, evenodd, grade, countdown, table
- D3 (23 Sep): sumofdigits, reverse, factorial — fib and prime unfinished
- D4 (24 Sep): fib and prime finished
- D5 (25 Sep): swap, sumN, stars
- D6 (26 Sep): calc, menu ← (power.c done or not?)
- **Total: 19 programs**

## What broke, and the root cause
- add.c empty → typed but never saved; the file on disk and the editor disagreed
- garbled lines → OVR (overwrite) mode was on
- "No such file or directory" → ran gcc from the wrong folder
- 7 printed as "even" → `=` instead of `==`; assignment has a value, 5 is true
- fib printed 0,1,2,4,8 → overwrote `a` before computing the next term
- prime said everything composite → loop reached i == n, and n % n is always 0
- duplicate files (fib2.c, two table.c) → made a new file instead of editing and committing
- menu loops forever on letter input → ← why (scanf and the input buffer)

## What I measured
- **First-try (code correct on the first gcc run): 10 / 19**
  hello, c2f, circle, sumofdigits, grade, table, swap, power, calc, reverse
- **Needed code fixes: 9 / 19**
  add, largest3, evenodd, countdown, fib, prime, factorial, sumN, menu
- Separate failure mode: wrong folder / wrong filename in the gcc command.
  Cost me several attempts on Day 1 and Day 3. Not a code error.
- W01 assessment, 45 min, closed book: incomplete. Average worked;
  largest-of-ten not constructed.
- `-pedantic` caught 3 declaration-after-label warnings that -Wall -Wextra missed

## What I still cannot explain
- Why did the running total come easily and the running maximum not, when they're the same shape?
- Why does scanf need &a but printf doesn't? ← attempt an answer
- What does #include <stdio.h> actually do? ← attempt an answer
- Why return 0 at the end of main? ← attempt an answer
- ←  anything else

## Claude's failed predictions this week
- Said `make` almost certainly came with g++ — it didn't
- Said declaration after a `case` label wouldn't compile under -std=c17 — it did (GNU extension)

## Prediction for next week
- ←  a number you can check next Sunday