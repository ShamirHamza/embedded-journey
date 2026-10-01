#include <stdio.h>
int main(void) {
    char text[1000];
    int count = 0;
    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
    return 0;
}