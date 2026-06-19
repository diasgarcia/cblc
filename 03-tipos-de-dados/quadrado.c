#include <stdio.h>

unsigned long quadrado(long base) {
    return base * base;
}

int main(void) {
    long num = -100000;

    printf("%ld^2 = %lu\n", num, quadrado(num));
    return 0;
}