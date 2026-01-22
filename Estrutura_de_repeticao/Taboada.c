#include <stdio.h>

int main()
{
int num;
int contador;
int resultado;
int tabuada;

  printf("***TABUADA***\n");
  printf("Qual numero voce quer a tabuada?\n");
  scanf("%d", &contador);
  printf("Ate quanto vai essa tabuada?\n");
  scanf("%d", &tabuada);

for (num = 1 ; num <= tabuada; num++)
  {
  resultado = num * contador;
  printf("A tabuada do %d e : %d x %d = %d \n", contador, contador, num, resultado);
  }

return 0;
}