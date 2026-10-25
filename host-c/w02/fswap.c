#include <stdio.h>
void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
printf("After swapping: %d %d\n",*a,*b);}
int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int *p1 = &x;
    int *p2 = &y;
    printf("Before swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    swap(p1, p2);
    printf("After, in main: x = %d, y = %d\n", x, y);
    return 0;}