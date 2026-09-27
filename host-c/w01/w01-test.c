#include <stdio.h>
int main (){
    float n, avg;
    int i;
    float sum = 0;
    int a = 97;
    for(i = 1; i <= 10; i++){
        printf("Enter number %d (%c): ", i,a);
        scanf("%f", &n);
        if()
        sum = sum + n;
        a++;
    }
    avg = sum / 10;
    printf("Average = %f\n", avg);
    printf("%c\n",a);
    return 0;
}