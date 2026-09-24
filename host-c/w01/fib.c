#include <stdio.h>

int fibbonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibbonacci(n - 1) + fibbonacci(n - 2);
}

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibbonacci(i));
    }
    return 0;
}