#include <stdio.h>


int main(void)
{
    float peso, altura, imc;
    char nome[50];
    int idade;

    printf("Calculo do Indice de Massa Corporal (IMC)\n");

    printf("Qual seu nome?:");
    scanf("%s", nome);

    printf("Qual sua idade?:"); 
    scanf("%d", &idade);
    
    printf("Digite o seu peso em (Kg):");
    scanf("%f", &peso);
    
    printf("Digite sua altura em (m):");
    scanf("%f", &altura);

    imc = peso / (altura * altura);


    if (imc < 18.5)
    {
        printf("%s, seu IMC e: %.2f - Abaixo do peso\n", nome, imc);
    }
    else if (imc >= 18.5 && imc < 24.9)
    {
        printf("%s, seu IMC e: %.2f - Peso normal\n", nome, imc);
    }
    else if (imc >= 25 && imc < 29.9)
    {
        printf("%s, seu IMC e: %.2f - Sobrepeso\n", nome, imc);
    }
    else if (imc >= 30 && imc < 34.9)
    {
        printf("%s, seu IMC e: %.2f - Obesidade grau I\n", nome, imc);
    }
    else if (imc >= 35 && imc < 39.9)
    {
        printf("%s, seu IMC e: %.2f - Obesidade grau II\n", nome, imc);
    }
    else 
    {
        printf("%s, seu IMC e: %.2f - Obesidade grau III\n", nome, imc);
    }

    printf("Obrigado por usar o calculador de IMC, %s!\n", nome);

    printf("Aperte ENTER para sair...");
    getchar();

    return 0;
}