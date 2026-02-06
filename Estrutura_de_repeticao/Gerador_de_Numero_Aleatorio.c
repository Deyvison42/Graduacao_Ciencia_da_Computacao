#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  srand(time(NULL));
  int contador, teto;
    printf("Quantos numeros aleatorios quer gerar?:\n");
    scanf("%d", &contador);
    printf("Qual o teto dos numeros aleatorios?:\n");
    scanf("%d", &teto); // MAXIMO QUE O CODIGO VAI GERAR
  
  for (int i = 1 ; i < teto; i++)
  {
    printf("O numero aleatorio e :%d\n", rand() % contador );
  }

  return 0;

}
