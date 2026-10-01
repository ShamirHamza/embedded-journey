#include <stdio.h>
int main(){
/* A */
int i = 0;
int a[5] = {10, 20, 30, 40, 50};
printf("%d\n", a[i++]);
printf("%d\n", i);
// Result of A = 10 and 1
/* B */
char c = 200;
printf("%d\n", c);
// Result of B = 200

/* C */
int n = 10;
while (n-- > 0) { }
printf("%d\n", n);
// Result of c = 1
/* D */
printf("%d\n", 1 + 2 * 3 % 4);
// Result of D = 3
return 0;}