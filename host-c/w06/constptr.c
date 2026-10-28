#include <stdio.h>
int main() {
    int x = 5, y = 9;

    int *p1 = &x;
    // const int *p2 = &x;
    int *const p3 = &x;
    // const int *const p4 = &x;

    *p1 = 100;    // OK
    p1 = &y;      // OK

    // *p2 = 100;    // error
    // p2 = &y;      // OK

    *p3 = 100;    // OK
    // p3 = &y;      // error

    // *p4 = 100;    // error
    // p4 = &y;      // error

    printf("%d %d\n", x, y);
    return 0;
}