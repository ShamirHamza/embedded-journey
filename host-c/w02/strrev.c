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
    for (size_t left = 0, right = length; left < right / 2; left++) {
        char temp = text[left];
        text[left] = text[length - 1 - left];
        text[length - 1 - left] = temp;
    }
    printf("Reversed string: %s\n", text);
    return 0;
}