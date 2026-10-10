#include <stdio.h>
int main (){
    int a[10];
    for (int i = 0; i < 10; i++){
        printf("Enter a number: ");
        scanf("%d", &a[i]);
    }
    float s=0;
    for (int i = 0; i < 10; i++){
        s = s + a[i];
    }
    float avg = s/10;
    for (int j=0; j < 10; j++){
        if (a[j] > avg){
            printf("%d is greater than average\n", a[j]);
        }
    }
    return 0;
}