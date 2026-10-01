#include <stdio.h>

int main(void) {
    int a[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    for (int p = 0; p < 9; p++) {
        for (int i = 0; i < 9 - p; i++) {
            if (a[i] > a[i + 1]) {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("Numbers in ascending order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}