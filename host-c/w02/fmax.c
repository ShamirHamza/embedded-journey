#include <stdio.h>
int max2(int a, int b){
    if (a>b){
        return a;
    }
    else {
        return b;}}
int main (){
    int c , d , g;
    printf("Enter the first number :- ");
    scanf("%d",&c);
    printf("Enter the second number :- ");
    scanf("%d",&d);
    printf("Enter the third number :- ");
    scanf("%d",&g);
    int e = max2(max2(c,d),g);
    printf("%d",e);
    printf("\n");
    return 0;
}