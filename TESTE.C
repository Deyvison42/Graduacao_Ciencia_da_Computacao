#include <stdio.h>

int main() {

    int populacaoB;
    float pibB;
    float pib_per_capitaB;

    printf("Digite a populacao da cidade B: ");
    scanf("%d", &populacaoB);
    printf("Digite o PIB da cidade B (em R$): ");
    scanf("%f", &pibB);

    
    pib_per_capitaB =  pibB / populacaoB;


    printf("Esssa é a populacao da cidade B: %d\n", populacaoB);
    printf("Esse é o PIB da cidade B: R$ %.2f\n", pibB);
    printf("PIB per Capita da cidade B: R$ %f\n", pib_per_capitaB);

    return 0;


}
