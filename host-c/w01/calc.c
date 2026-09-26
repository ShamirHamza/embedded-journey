#include <stdio.h>
int main(){
    float x ,y;
    printf("Enter your first number here :- ");
    scanf("%f",&x);
    printf("Enter your second number here :- ");
    scanf("%f",&y);
    char ch;
    printf("Enter the operator here (Out of + , - , * and /):- ");
    scanf(" %c",&ch); 
    switch (ch) {
        case '+':{
        float sum = x+y;
        printf("The sum of the given numbers is :- %f\n",sum);
        break;}
        case '-':{
        float diff = x-y;
        printf("The difference of the given numbers is :- %f\n",diff);
        break;}
        case '*':{
        float pro = x*y;
        printf("The product of the given numbers is :- %f\n",pro);
        break;}
        case '/': {
        if(y==0){
            printf("Choose non- zero numbers!!!\n");
        } else {
            float div = x/y;
            printf("The quotient of the given numbers is :- %f\n",div);
        }
        break;}
        default:{
        printf("INVALID OPERATORS!!!!!!!!\n");
        break;}
    }
    return 0;
}