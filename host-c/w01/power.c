#include <stdio.h>
int main (){
    int x,y;
    printf("Enter the base here :- ");
    scanf("%d",&x);
    printf("Enter the exponent here :- ");
    scanf("%d",&y);
    int p;
    if (x<0 || y<0){
        printf("Please enter the positive numbers  :)\n");
    } else {
    for (int i=0;i<=y;i++){
        p = x*x;
    }
    printf("Your answer is :- %d\n",p);}
    return 0;
}