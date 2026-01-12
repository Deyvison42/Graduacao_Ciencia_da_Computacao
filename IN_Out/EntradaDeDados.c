#include <stdio.h>

int main()
{
    char nome[30];
    int idade;
    float altura;

    printf("Digite um numero inteiro: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, idade, altura);
   
    return 0;
}
