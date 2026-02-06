#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int soma, sub, mult, index = 0,opcao, num1, num2;
  float div, num1f, num2f;

  do
  { 
    ("\t---CALCULADORA---\n");
    printf("Selecione um Operador:\n 1. Soma\n 2. Subtracao\n 3. Multiplicao\n 4. Divisao\n:");
    scanf("%d", &opcao);
    if (opcao > 4)
      printf("Opcao Invalida!\n\n");
  }while (opcao > 4);
    
    switch (opcao)
    {
    case 1:
      printf("Calculadora de Soma:");
      scanf("%d %d",&num1, &num2);
      soma = num1 + num2;
      printf("Resultado %d + %d = %d\n", num1, num2, soma);
      break;
    case 2:
      printf("Calculadora de Subtracao:");
      scanf("%d %d",&num1, &num2);
      sub = num1 - num2;
      printf("Resultado %d - %d = %d\n", num1, num2, sub);
      break;
    case 3:
      printf("Calculadora de Multiplicacao:");
      scanf("%d %d",&num1, &num2);
      mult = num1 * num2;
      printf("Resultado %d * %d = %d\n", num1, num2, mult);
      break;
    case 4:
      printf("Calculadora de Divisao:\n");
      scanf("%f %f",&num1f, &num2f);
      div = num1f / num2f;
      printf("Resultado %2.f / %2.f = %2.f\n", num1f, num2f, div);
      break;
    }
}







