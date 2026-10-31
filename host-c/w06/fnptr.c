#include <stdio.h>

int add(int a, int b)  { return a + b; }
int sub(int a, int b)  { return a - b; }
int mul(int a, int b)  { return a * b; }
int divi(int a, int b) { return b ? a / b : 0; }
int avg(int a , int b) {
    int sum = a+b;
    return (sum/2);
} // added this to check whether I understood the purpose of this exercise 

int main(void) {
    int (*op)(int, int); 
    int (*ops[5])(int, int) = { add, sub, mul, divi, avg };
    int n_ops = sizeof(ops) / sizeof(ops[0]);
    for (int i = 0; i < n_ops; i++)
    printf("ops[%d](12, 4) = %d\n", i, ops[i](12, 4));    

    op = add;                
    printf("%d\n", op(3, 4));   

    op = mul;                
    printf("%d\n", op(3, 4));

    return 0;
}