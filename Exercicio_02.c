#include <stdio.h>

int main(){
  // Variaveis
  int mes[12], temp_max = 0, temp_min = 100, index_max, index_min;

  for (int i = 0; i < 12; i++)
  {
    printf("Qual a temperatura do %d mes?:\n", i);
    scanf("%d", &mes[i]);
    if (mes[i] > temp_max){
      temp_max = mes[i];
      index_max = i;
    }
    if (mes[i] < temp_min)
    {
      temp_min = mes[i];
      index_min = i;
      printf("\n\nTemp min: %d\n\n", temp_min);
    }
    
  }

  


  printf("A temperatura maxima foi de [%d] no mes de ", temp_max);
switch (index_max)
  {
  case 0:
    printf("Janeiro\n");
    break;
  case 1:
    printf("Fevereiro\n");
    break;
  case 2:
    printf("Março\n");
    break;
  case 3:
    printf("Abril\n");
    break;
  case 4:
    printf("Maio\n");
    break;
  case 5:
    printf("Junho\n");
    break;
  case 6:
    printf("Julho\n");
    break;
  case 7:
    printf("Agosto\n");
    break;
  case 8:
    printf("Setembro\n");
    break;
  case 9:
    printf("Outubro\n");
    break;
  case 10:
    printf("Novembro\n");
    break;
  case 11:
    printf("Dezembro\n");
    break;
  }
  printf("A temperatura minima foi de [%d] no mes de ", temp_min);
  switch (index_min)
  {
  case 0:
    printf("Janeiro\n");
    break;
  case 1:
    printf("Fevereiro\n");
    break;
  case 2:
    printf("Março\n");
    break;
  case 3:
    printf("Abril\n");
    break;
  case 4:
    printf("Maio\n");
    break;
  case 5:
    printf("Junho\n");
    break;
  case 6:
    printf("Julho\n");
    break;
  case 7:
    printf("Agosto\n");
    break;
  case 8:
    printf("Setembro\n");
    break;
  case 9:
    printf("Outubro\n");
    break;
  case 10:
    printf("Novembro\n");
    break;
  case 11:
    printf("Dezembro\n");
    break;
  }

}



