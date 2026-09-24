#include <stdio.h>
#include <math.h>
int main (){
    int a;
    printf("Enter the number to be checked here:- ");
    scanf("%d",&a);
    for (int i=2; i<a; i++){
        if (a%i==0){
            printf("The number is not prime!!\n");
            return 1;
        }
        else {
        printf("The number is prime!!\n");
    }
    } 
    return 0;
}