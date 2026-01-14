#include <stdio.h>

int main() {
    int N1, N2;
    int soma, subtracao, multiplicacao, divisao;

// Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &N1);
    printf("Digite o segundo numero: ");
    scanf("%d", &N2);   

// Operações matemáticas
    soma = N1 + N2;
    subtracao = N1 - N2;
    multiplicacao = N1 * N2;
    divisao = N1 / N2;

// Exibição dos resultados
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %d\n", divisao);

    return 0;
}