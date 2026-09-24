#include <stdio.h>
int main (){
    int a ,b ,c;
    printf("Enter then number a:- ");
    scanf("%d",&a);
    printf("Enter then number b:- ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After we swap the values of a and b , we get a=%d and b=%d\n",a,b);
    return 0;
}