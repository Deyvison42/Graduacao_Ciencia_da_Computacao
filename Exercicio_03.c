#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int num[10], opcao, j = 0;

  srand(time(NULL));

  for (int i = 0; i < 10; i++)
    num[i] = rand() % 10;

  do
  {
    printf(" 0 - Ecerrar\n 1 - Inicio Fim\n 2 - Fim Inicio\n:");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 0:
      printf("Encerrando...\n");
      j++;
      break;
    case 1:
      for (int i = 0; i < 10; i++)
      {
        printf("Numeros %d\n", num[i]);
      }
      break;
    case 2:
       for (int i = 8; i >= 0; i--)
      {
        printf("Numeros %d,", num[i]);
      }
      break;
    default:
      printf("Opcao Invalida!");
    }
  } while (j <= 0);
}