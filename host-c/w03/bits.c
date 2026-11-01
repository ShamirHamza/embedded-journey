#include <stdint.h>
#include <stdio.h>
uint32_t set_bit(uint32_t reg, uint8_t n){
    return reg | (1u << n);
}
uint32_t clear_bit(uint32_t reg, uint8_t n){
    return reg & ~(1u << n);
}
uint32_t toggle_bit(uint32_t reg, uint8_t n){
    return reg ^ (1u << n);
}
uint8_t read_bit(uint32_t reg, uint8_t n){
    return (reg >> n) & 1;
}
uint32_t write_field(uint32_t reg, uint32_t mask, uint8_t shift, uint32_t value){
    reg &= ~mask; 
    reg |= (value << shift) & mask; 
    return reg;
}
void print_binary(uint32_t value, uint8_t bits){
    for(int i = bits - 1; i >= 0; i--){
        printf("%u", (value >> i) & 1);
    }
    printf("\n");
}
int main(void) {
    uint32_t mask  = 0x3u << 10;
    uint8_t  shift = 10;
    uint32_t reg;

    // 1 — value lands at bits 10-11
    reg = 0x00000000;
    print_binary(reg, 32);
    reg = write_field(reg, mask, shift, 1);
    print_binary(reg, 32);

    // 2 — the other 30 bits survive
    reg = 0xFFFFFFFF;
    print_binary(reg, 32);
    reg = write_field(reg, mask, shift, 1);
    print_binary(reg, 32);

    // 3 — overwriting a field that already holds 11
    reg = 0x00000C00;          // bits 10 and 11 set
    print_binary(reg, 32);
    reg = write_field(reg, mask, shift, 1);
    print_binary(reg, 32);

    // 4 — OR only, no clear: the value never lands
    reg = 0x00000C00;
    reg = reg | ((1u << shift) & mask);
    print_binary(reg, 32);

    // 5 — oversized value, the & mask clamp
    reg = 0x00000000;
    reg = write_field(reg, mask, shift, 7);
    print_binary(reg, 32);

    return 0;
}
