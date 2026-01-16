#include <stdio.h>

int main(){

  int numero1, numero2;

  printf("Digite o numero 1 ");
  scanf("%i", &numero1);

  printf("Digite o numero 2 ");
  scanf("%i", &numero2);

  if (numero1 > numero2){
    printf("O numero 1 e maior");
  }
  if (numero1 == numero2)
  {
    printf("Os numeros sao iguais");
  }
  
  else {
    printf("o numero 2 e maior");
  }

  return 0;

}