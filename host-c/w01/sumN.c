#include <stdio.h>
int main(){
    float n, avg;
    int i;
    float sum = 0;
    for(i = 1; i <= 10; i++){
        printf("Enter number %d: ", i);
        scanf("%f", &n);
        sum = sum + n;
    }
    avg = sum / 10;
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", avg);
    return 0;
}