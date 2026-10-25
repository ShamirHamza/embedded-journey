#include <stdio.h>
#include <stdint.h>
int main(){
    int a = 42;
    printf("%p",a);
    printf("%p",&a);
    return 0;
}