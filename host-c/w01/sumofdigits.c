#include <stdio.h>
int main (){
    int a;
    printf("Enter the 4-digit number here:- ");
    scanf("%d",&a);
    int a1=a/1000;
    int a2=(a%1000)/100;
    int a3=(a%100)/10;
    int a4=a%10;
    int s=a1+a2+a3+a4;
    printf("The sum of the digits is :- %d\n",s);
    return 0;
}