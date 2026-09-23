#include <stdio.h>
int main (){
    int x;
    printf("Enter the 4-digit number here:- ");
    scanf("%d",&x);
    int x1=x/1000;
    int x2=(x%1000)/100;
    int x3=(x%100)/10;
    int x4=x%10;
    printf("The reverse of the number is :- %d%d%d%d\n",x4,x3,x2,x1);
    return 0;
}