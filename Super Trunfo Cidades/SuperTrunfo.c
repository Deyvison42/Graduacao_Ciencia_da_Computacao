#include <stdio.h>

int main(void)
{
/*Área de variáveis*/

// Variáveis da Carta A
char estadoA[50];
char cidadeA[50];
int codigoA;
int populacaoA;
float areaA;
float pibA;
int turismoA;
float densidadeA;
float pib_per_capitaA;
float Super_PoderA; 

// Variáveis da Carta B
char estadoB[30];
char cidadeB[30];
int codigoB;
int populacaoB;
float areaB;
float pibB;
int turismoB;
float densidadeB;
float pib_per_capitaB;
float Super_PoderB;

//Variaveis dos Resultados
float Resultado_do_Super;
float Resultado_Populacao;
float Resultado_Area;
float Resultado_pib;
float Resultado_Turismo;

//Cadastro da CidadeA 
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

// Cálculo da densidade populacional, PIB per capita, Super e Resultado

densidadeA = populacaoA / areaA;
pib_per_capitaA = pibA / populacaoA;

densidadeB = populacaoB / areaB;
pib_per_capitaB = pibB / populacaoB;

Resultado_Populacao = populacaoA > populacaoB;
Resultado_Area = areaA > areaB;
Resultado_pib = pibA > pibB;
Resultado_Turismo = turismoA > turismoB;

Super_PoderA = populacaoA + areaA + pibA + turismoA;
Super_PoderB = populacaoB + areaB + pibB + turismoB;

Resultado_do_Super = Super_PoderA > Super_PoderB; 


// Exibição dos dados cadastrados e cálculos

printf("\n--- Dados da Carta Cadastrada A ---\n");
printf("Estado: %s\n", estadoA);
printf("Cidade: %s\n", cidadeA);
printf("Codigo: %d\n", codigoA);
printf("Populacao: %d(Carta A venceu?) (%1.f)\n", populacaoA,Resultado_Populacao);
printf("Area: %.2f km2(Carta A venceu?) (%1.f)\n", areaA, Resultado_Area);
printf("PIB: R$ %.2f Bilhoes(Carta A venceu?) (%1.f)\n", pibA, Resultado_pib);
printf("Turismo: %d(Carta A venceu?) (%1.f)\n", turismoA, Resultado_Turismo);
printf("Densidade Populacional: %.2f habitantes/km2\n", densidadeA);
printf("PIB per Capita: R$ %f\n", pib_per_capitaA);

printf("\n--- Dados da Carta Cadastrada B ---\n");
printf("Estado: %s\n", estadoB);
printf("Cidade: %s\n", cidadeB);
printf("Codigo: %d\n", codigoB);
printf("Populacao: %d\n", populacaoB);
printf("Area: %.2f km2\n", areaB);
printf("PIB: R$ %.2f Bilhoes\n", pibB);
printf("Turismo: %d(Carta A venceu?) (%1.f)\n", turismoB, Resultado_Turismo);
printf("Densidade Populacional: %.2f habitantes/km2\n", densidadeB);
printf("PIB per Capita: R$ %f\n", pib_per_capitaB);

//Resultado do Super

printf("---Resultado do Super---\n");
printf("A soma do SuperA e %1.f, e do SuperB e %1.f\n",Super_PoderA, Super_PoderB);
printf("A Carta A e maior que a Carta B? %1.f", Resultado_do_Super);

return 0;

}