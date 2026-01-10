#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota1, nota2, nota3;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);    

    printf("Digite a terceira nota: "); 
    scanf("%f", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3.0;

    printf ("A media das notas e: %.2f\n", media);

    if (media >= 6)
    {
        printf("Aluno aprovado!\n");
    }
    else
    {
        printf("Aluno reprovado!\n");
    }
    
    return 0;
}

