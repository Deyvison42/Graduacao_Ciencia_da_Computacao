#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;

    printf("*** Calculo de Media de Tres Notas ***\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3.0;

    printf("A media das notas e: %.1f\n", media); 

    return 0;
}