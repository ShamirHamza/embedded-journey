#include <stdio.h>
int main (){
    int a;
    printf ("enter the number here :- ");
    scanf("%d",&a);
    if(a==0){
        printf("the number is 0 , cant do anything\n");
    } else {
    if (a%2==0){
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }}
    return 0;
}