#include <stdio.h>
int main (){
    int x;
    printf("Enter the number here:- ");
    scanf("%d",&x);
    if (x<0){
        printf("Enter a positive no.!!\n");
        return 1;
    }
    int fact = 1;
    for (int i=1;i<=x;i++){
     fact = fact *i;
    }
    printf("%d\n",fact);
    return 0;
}