#include <stdio.h>
#include <string.h>
int main(void) {
    char text[1000];
    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        return 1;
    }
    size_t length = strlen(text);
    if (length > 0 && text[length - 1] == '\n') {
        text[--length] = '\0';
    }
    int is_palindrome = 1;
    for (size_t i = 0; i < length / 2; i++) {
        if (text[i] != text[length - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    return 0;
}