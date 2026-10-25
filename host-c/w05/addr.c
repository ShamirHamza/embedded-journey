#include <stdio.h>
int main (){
    int a = 42;
    int b = 7;
    int *p = &a;
    *p = 99;
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++){
    printf("&arr[%d] = %p\n", i, (void*)&arr[i]);}
    printf("arr      = %p\n", (void*)arr);
    printf("&arr[0]  = %p\n", (void*)&arr[0]);
    printf("a = %d\n", a);
    printf("p  = %p\n", (void*)p); 
    printf("*p = %d\n", *p);
    printf("&p = %p\n", (void*)&p);
    printf("&a = %p\n", (void*)&a); 
    printf("b  = %d\n", b);
    printf("&b = %p\n", (void*)&b);  
    return 0;
}