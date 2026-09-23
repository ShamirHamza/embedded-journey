#include <stdio.h>
int main (){
    int a , i;
    printf("Enter the number whose table you wanna see :- ");
    scanf("%d",&a);
    for (i=1;i<=10;i++){
        int s = a*i;
        printf("%d\n",s);
    }
    return 0;
}