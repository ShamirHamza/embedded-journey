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
void print_binary(uint32_t value, uint8_t bits){
    for(int i = bits - 1; i >= 0; i--){
        printf("%u", (value >> i) & 1);
    }
    printf("\n");
}
int main(){
    uint32_t reg = 0xB2;
    print_binary(reg, 8);
    
    reg = set_bit(reg, 4);
    print_binary(reg, 8);
    
    reg = clear_bit(reg, 4);
    print_binary(reg, 8);
    
    reg = toggle_bit(reg, 4);
    print_binary(reg, 8);
    
    uint8_t bit_value = read_bit(reg, 4);
    print_binary(bit_value, 8);
    
    return 0;
}