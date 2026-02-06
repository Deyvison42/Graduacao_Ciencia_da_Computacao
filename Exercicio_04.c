#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int vet[100], copia, trocou;

  
  srand(time(NULL));
  
  for (int i = 0; i < 10; i++){
    vet[i] = rand() % 1000;    
    printf(" Vetor Original:%d ",vet[i]);
  }

  do{
    trocou = 0;
    for (int i = 0; i < 10; i++)
    {
      if (vet [i] > vet[i+1])
      {
        copia = vet[i];
        vet[i] = vet[i+1];
        vet[i+1] = copia;
        trocou = 1;
      }
    }
  }while (trocou != 0);
  printf("\n\n");
  for (int i = 0; i < 10; i++)
    printf(" Vetor Ordenado:%d ", vet[i]);
  
}