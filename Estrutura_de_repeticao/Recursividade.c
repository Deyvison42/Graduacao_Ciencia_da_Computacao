#include <stdio.h>

void recursevo(int numero){

  if (numero > 0)
  {
    printf("%d\n", numero);
    recursevo(numero - 1);
  }else{
    printf("Esse numero ‚ menor que 0!");
  }     
}

int main(){
    int quantidade = 10;

    printf("Contagem regressiva...\n");
    recursevo(quantidade);

  return 0;
}