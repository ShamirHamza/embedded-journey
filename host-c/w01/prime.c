#include <stdio.h>
#include <math.h>
int main (){
    int a;
    printf("Enter the number to be checked here:- ");
    scanf("%d",&a);
    int m=2;
    for (int i=2; i<a; i++){
        if (a%m==0){
            printf("The number is not prime!!\n");
            return 1;
        }
        else {
        printf("The number is prime!!\n");
    }
    m=m+1;
    } 
    return 0;
}