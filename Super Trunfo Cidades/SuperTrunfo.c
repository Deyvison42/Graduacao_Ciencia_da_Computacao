#include <stdio.h>

int main(void)
{
  
/*Área de variáveis*/
char estado[50];
char cidade[50];
int codigo;
int populacao;
float area;
float pib;
int turismo;

/*Área de variáveis*/

printf("Super Trunfo Cidades - Em desenvolvimento!\n");
printf("Cadastro de uma cidade:\n");


printf("Estado(PE, RJ, BH...): ");
scanf("%s", estado);

printf("Nome da cidade: ");
scanf("%s", cidade);

printf("Codigo da cidade(01,02,03...): ");
scanf("%d", &codigo);   

printf("Populacao da cidade: ");    
scanf("%d", &populacao);

printf("Area da cidade (em km²): ");    
scanf("%f", &area);

printf("PIB da cidade (em R$): "); 
scanf("%f", &pib);

printf("Quantos pontos turisticos tem na cidade?: ");
scanf("%d", &turismo);

printf("\nCadastro concluido!\n");
printf("Cidade: %s\n", cidade);
printf("Codigo: %d\n", codigo);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f km²\n", area);
printf("PIB: R$ %.2f\n", pib);
printf("Pontos turisticos: %d\n", turismo);

    return 0;
}