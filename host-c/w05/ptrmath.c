#include <stdio.h>
int main(void) {
    char c[5] = {'A', 'B', 'C', 'D', 'E'};
    int i[5] = {10, 20, 30, 40, 50};
    double d[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int *p1 = &i[0];
    double *p2 = &d[0];
    char *p3 = &c[0];
    int *p = i;
    for (int k = 0; k < 5; k++) {
    printf("%d at %p\n", *p, (void*)p);
    p++;}
    printf("p ended at %p\n", (void*)p);
    printf("&i[4] is   %p\n", (void*)&i[4]);
    printf("%c %d %f\n", *p3, *p1, *p2);
    printf("%p %p %p\n", (void*)p3, (void*)p1, (void*)p2);
    printf("%p %p %p\n", (void*)&c[1], (void*)&i[1], (void*)&d[1]);
    printf("%p %p %p\n", (void*)(p3+1), (void*)(p1+1), (void*)(p2+1));
    return 0;
}
