#include <stdio.h>
#include <stdint.h>
int main() {
    printf("%zu\n", sizeof(int)); // 4 right 
    printf("%zu\n", sizeof(char)); // 4 wrong (should be 1)
    printf("%zu\n", sizeof(long)); // 8 right 
    printf("%zu\n", sizeof(short)); // 2 right 
    printf("%zu\n", sizeof(uint8_t)); // 8 wrong (should be 1)
    printf("%zu\n", sizeof(uint16_t)); // 16 wrong (should be 2)
    printf("%zu\n", sizeof(uint32_t)); // 32 wrong (should be 4)
    printf("%zu\n", sizeof(uint64_t)); // 64 wrong (should be 8)
    return 0;
}