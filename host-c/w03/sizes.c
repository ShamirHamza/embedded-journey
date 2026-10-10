#include <stdio.h>
#include <stdint.h>
int main() {
    printf("%zu\n", sizeof(int)); // 4
    printf("%zu\n", sizeof(char)); // 1
    printf("%zu\n", sizeof(long)); // 8
    printf("%zu\n", sizeof(short)); // 2
    printf("%zu\n", sizeof(uint8_t)); // 1
    printf("%zu\n", sizeof(uint16_t)); // 2
    printf("%zu\n", sizeof(uint32_t)); // 4
    printf("%zu\n", sizeof(uint64_t)); // 8
    return 0;
}