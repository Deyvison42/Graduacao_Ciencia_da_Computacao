#include <stdio.h>

int main() {

    // ================================
    // 1. INCREMENTO SIMPLES
    // ================================
    int x = 5;
    printf("Valor inicial de x = %d\n", x);

    x++;  // incrementa 1 (x = x + 1)
    printf("Depois de x++ -> x = %d\n\n", x);

    // ================================
    // 2. PRE-INCREMENTO (++x)
    // ================================
    int a = 5;
    int y;

    y = ++a;  // a é incrementado antes de ser usado
    printf("Pre-incremento:\n");
    printf("a = %d\n", a); // 6
    printf("y = %d\n\n", y); // 6

    // ================================
    // 3. POS-INCREMENTO (x++)
    // ================================
    int b = 5;
    int z;

    z = b++;  // b é usado primeiro, depois incrementado
    printf("Pos-incremento:\n");
    printf("b = %d\n", b); // 6
    printf("z = %d\n\n", z); // 5

    // ================================
    // 4. USO EM EXPRESSÕES
    // ================================
    int m = 3;
    int n = 3;

    int r1 = ++m; // m = 4, r1 = 4
    int r2 = n++; // r2 = 3, n = 4

    printf("Em expressoes:\n");
    printf("m = %d, r1 = %d\n", m, r1);
    printf("n = %d, r2 = %d\n\n", n, r2);

    // ================================
    // 5. USO EM LOOP
    // ================================
    printf("Loop for com i++:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // ================================
    // 6. INCREMENTO EM PONTEIROS
    // ================================
    int v[3] = {10, 20, 30};
    int *p = v; // aponta para o primeiro elemento do vetor

    printf("Incremento em ponteiros:\n");
    printf("Valor apontado = %d\n", *p);  // 10

    p++; // aponta para o próximo elemento
    printf("Depois de p++ -> Valor apontado = %d\n", *p); // 20

    p++;
    printf("Depois de outro p++ -> Valor apontado = %d\n\n", *p); // 30

    // ================================
    // 7. EXEMPLO DE ERRO (NAO FAÇA ISSO)
    // ================================
    int q = 10;
    // q = q++;  // Isto causa comportamento indefinido em C!

    printf("Exemplo de comportamento indefinido evitado: q = %d\n", q);

    return 0;
}
