#include <stdio.h>
int main (){
    int x;
    int a=0;
    int b=1;
    printf("Enter the number of terms here:- ");
    scanf("%d",&x);
    printf("%d\n%d\n",a,b);
    for(int i=0;i<x;i++){
        int fib=a+b;
        a=b;
        b=fib;
        printf("%d\n",fib);
    }
    return 0;
}