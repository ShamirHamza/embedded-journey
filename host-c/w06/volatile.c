#include <stdio.h>
volatile int flag = 0;

int main(void) {
    while (flag == 0) { }
    return 0;
}