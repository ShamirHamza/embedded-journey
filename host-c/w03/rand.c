#include <stdio.h>
#include <stdint.h>
int main(){
    uint32_t reg = 0xA8000000;
    uint32_t mask;
    mask = 1 << 10;
    mask = 1 << 11;
    reg = reg | mask;
    printf("Result: 0x%08X\n", (unsigned int)reg);
    return 0;
}