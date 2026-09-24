#include <stdio.h>
int main (){
    int x;
    int a=0;
    int b=1;
    printf("Enter the number of terms here:- ");
    scanf("%d",&x);
    if (x!=0 && x!=1){
        printf("%d\n%d\n",a,b);
    } else {
        printf("%d\n",a);
        return 0;
    }
    for(int i=0;i<(x-2);i++){
        int fib=a+b;
        printf("%d\n",fib);
        a=b;
        b=fib;
    }
    return 0;
}