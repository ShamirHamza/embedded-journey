#include <stdio.h>
void swap(int a, int b){
    int t;
    t = a;
    a = b;
    b = t;
printf("%d %d",a,b);}
int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swap(x, y);
    printf("After swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;}