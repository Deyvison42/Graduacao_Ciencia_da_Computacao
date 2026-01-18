#include  <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
  //Area de variaveis
  int opcao;
  int numero_secreto, palpite;

  printf("Selecione uma opcao\n1 - Iniciar Jogo\n2 - Regras\n3 - Exit\n");
  scanf("%d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("---Jogo do Numero Secreto---\n Escolha um numero de 1 a 9: ");
    scanf("%d", &palpite);
    srand(time(0));
    numero_secreto = rand() % 10;

    if (palpite == numero_secreto)
    {
      printf("Voce acartou!!\n");
      printf("O numero foi %d", numero_secreto);
    }else{
      printf("Tente novamente ;-;\n ");
      printf("O numero foi %d", numero_secreto);
    }
    
    break;
  case 2:
    printf("E so escolher um numero de 1 a 9");
    break;
  case 3:
    printf("Saindo do Jogo");
    break;
  default:
  printf("Opcao nao existe");
    break;
  }
          return 0; 

}