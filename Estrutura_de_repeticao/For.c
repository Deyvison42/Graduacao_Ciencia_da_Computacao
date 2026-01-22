#include <stdio.h>

int main(){
  
int contador;

printf("Ate quanto voce quer contar?\n");
scanf("%d", &contador);
  
  for (int num = 1; num <= contador ; num++)
  {
    printf("Contador:%d \n",num);
  }
  

}