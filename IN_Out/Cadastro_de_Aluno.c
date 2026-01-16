#include <stdio.h>

int main()
{
    char nome[50];
    int idade, matricula;
    float altura;

    printf("Digite o nome do aluno: ");
    scanf("%49s", nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Digite a altura do aluno (em metros): ");   
    scanf("%f", &altura);
    
    printf("Digite a matricula do aluno: ");
    scanf("%d", &matricula);


    printf("\nCadastro do Aluno:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Matricula: %d\n", matricula);
    printf("Altura: %.2f\n", altura);

    return 0;
}
