#include <stdio.h>
int main(void) {
    int a[10];
    int target;
    int index = -1;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search for: ");
    scanf("%d", &target);
    for (int i = 0; i < 10; i++) {
        if (a[i] == target) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("not found\n");
    }
    return 0;
}