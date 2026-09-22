#include <stdio.h>
int main (){
    int a , b , c;
    printf ("Enter the first number a here :- ");
    scanf("%d",&a);
    printf ("Enter the second number b here :- ");
    scanf("%d",&b);
    printf ("Enter the third number c here :- ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("a is the largest\n");
    }
    else if (b>a && b>c){
        printf ("b is the largest\n");
    }
    else {
        printf("c is the largest\n");
    }
    return 0;}
