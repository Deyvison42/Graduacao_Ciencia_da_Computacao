#include <stdio.h>

int main() {
    unsigned long int a = 4000000000;
    unsigned int b = 4000000000;
    long int c = 4000000000; 
    int d = 4000000000;
    short int e = 40000;

    printf("Valor de a: %lu\n", a);
    printf("Valor de b: %u\n", b);
    printf("Valor de c: %ld\n", c);
    printf("Valor de d: %d\n", d);
    printf("Valor de e: %d\n", e);
    printf("Tamanho de unsigned long int: %zu bytes\n", sizeof(a));
    printf("Tamanho de unsigned int: %zu bytes\n", sizeof(b));
    printf("Tamanho de long int: %zu bytes\n", sizeof(c));
    printf("Tamanho de int: %zu bytes\n", sizeof(d));
    printf("Tamanho de short int: %zu bytes\n", sizeof(e)); 

    return 0;
}

