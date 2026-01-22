#include <stdio.h>

int main()
{
int num1 = 1;
int contador;
printf("Ate quanto quer contar?\n ");
scanf("%d", &contador);

while (num1 <= contador)
{
  printf("Contador:%d \n",num1);
  num1++;
}


}