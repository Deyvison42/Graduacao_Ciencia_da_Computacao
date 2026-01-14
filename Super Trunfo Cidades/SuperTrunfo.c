#include <stdio.h>

int main(void)
{
  
/*Área de variáveis*/
// Variáveis da Carta A
char estadoA[50];
char cidadeA[50];
unsigned int codigoA;
int populacaoA;
float areaA;
float pibA;
int turismoA;
float densidadeA;
float pib_per_capitaA;
// Variáveis da Carta B
char estadoB[50];
char cidadeB[50];
unsigned int codigoB;
int populacaoB;
float areaB;
float pibB;
int turismoB;
float densidadeB;
float pib_per_capitaB;

// Cadastro de Cidade A 

printf("Cadastro da Cidade A\n");

printf("Digite o nome do estado: ");
scanf("%s", estadoA);

printf("Digite o codigo da cidade: ");
scanf("%d", &codigoA);

printf("Digite o nome da cidade: ");
scanf("%s", cidadeA);

printf("Digite a populacao da cidade: ");
scanf("%d", &populacaoA);

printf("Digite a area da cidade (em km²): ");
scanf("%f", &areaA);

printf("Digite o PIB da cidade (em R$): ");
scanf("%f", &pibA);

printf("Quantos Pontos Turisticos tem na cidede?");
scanf("%d", &turismoA); 

// Cadastro de Cidade B 

printf("\nCadastro da Cidade B\n");

printf("Digite o nome do estado: ");
scanf("%s", estadoB);

printf("Digite o codigo da cidade: ");
scanf("%d", &codigoB);

printf("Digite o nome da cidade: ");
scanf("%s", cidadeB);

printf("Digite a populacao da cidade: ");
scanf("%d", &populacaoB);

printf("Digite a area da cidade (em km²): ");
scanf("%f", &areaB);

printf("Digite o PIB da cidade (em R$): ");
scanf("%f", &pibB);

printf("Quantos Pontos Turisticos tem na cidede?");
scanf("%d", &turismoB); 

// Cálculo da densidade populacional e PIB per capita

densidadeA = populacaoA / areaA;
pib_per_capitaA = pibA / populacaoA;

densidadeB = populacaoB / areaB;
pib_per_capitaB = pibB / populacaoB;

// Exibição dos dados cadastrados e cálculos

printf("\n--- Dados da Carta Cadastrada A ---\n");
printf("Estado: %s\n", estadoA);
printf("Cidade: %s\n", cidadeA);
printf("Codigo: %d\n", codigoA);
printf("Populacao: %d\n", populacaoA);
printf("Area: %.2f km2\n", areaA);
printf("PIB: R$ %.2f Bilhoes\n", pibA);
printf("Turismo: %s\n", turismoA ? "Sim" : "Nao");
printf("Densidade Populacional: %.2f habitantes/km2\n", densidadeA);
printf("PIB per Capita: R$ %f\n", pib_per_capitaA);

printf("\n--- Dados da Carta Cadastrada B ---\n");
printf("Estado: %s\n", estadoB);
printf("Cidade: %s\n", cidadeB);
printf("Codigo: %d\n", codigoB);
printf("Populacao: %d\n", populacaoB);
printf("Area: %.2f km2\n", areaB);
printf("PIB: R$ %.2f Bilhoes\n", pibB);
printf("Turismo: %s\n", turismoB ? "Sim" : "Nao");
printf("Densidade Populacional: %.2f habitantes/km2\n", densidadeB);
printf("PIB per Capita: R$ %f\n", pib_per_capitaB);


    return 0;
}