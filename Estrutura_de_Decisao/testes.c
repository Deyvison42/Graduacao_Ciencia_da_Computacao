#include <stdio.h>

int main(){
  int  numero1, numero2, numero3;
  int Calculo1;
  int Resultado;

  printf("Insira o Numero 1 ");
  scanf("%d", &numero1);
  
  printf("Insira o Numero 1 ");
  scanf("%d", &numero2);
  
  printf("Insira o Numero 1 ");
  scanf("%d", &numero3);

 Calculo1 = numero1 + numero2 + numero3;
Resultado = Calculo1 % 2;

  if(Resultado != 0){
    printf ("O Calculo deu %d\n",Calculo1);
    printf ("O numero %d e Inpar", Resultado);
  }else{
    printf ("O Calculo deu %d\n",Calculo1);
    printf("O numero %d e PAR", Resultado);
  }

}