#include <stdio.h>

int main(){
  unsigned int idade;

  printf("Qual tua idade:");
  scanf("%d", &idade);

  if (idade >= 60)
  {
    printf("Voce e idoso!");
  }else if (idade >=40)
  {
    printf("Deve fazer exame de prostata");
  }
  else if(idade >= 30){
    printf("Ta ficando velhor em pai!");
  }else if(idade >=20){
    printf("Ta bom ainda!");
  }else if(idade >=14){
    printf("Odeio adolecente!");
  }else
    printf("E um bebe ainda");
  {
  
  }
  
  return 0;

};