#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  unsigned int opcao;
  int maquina;
  int jogador;
  int calc;
  char papel[30] = "papel", tesoura[30] = "tesoura", pedra[30] = "pedra";

  printf("---Jokenpo---\n Escolha uma Opcao\n 1 - Iniciar Jogo\n 2 - Regras\n 3 - Exit\n :");
  scanf("%d", &opcao);

switch (opcao)
  {
  case 1:
    printf("---Jokenpo---\n");
    printf("Escolha uma opcao\n 1 - Papel\n 2 - Tesoura\n 3 - Pedra\n :");
    scanf("%d", &jogador);



    if (jogador >= 4)
    {
      printf("Erro!");
    }

    srand(time(NULL));
    maquina = (rand() % 3) + 1;

    if (maquina == jogador)
    {
      printf("Empate");
    }else{

    calc =  maquina + jogador;
    

  switch (calc)
    {
    case 3:
    //Tesoura Vence
      printf("A maquina escolheu %d e o jogador escolheu %d\n", maquina, jogador);
      if (jogador == 2)
      {
        printf("O Jogador Venceu!\n");
      }else{
        printf("A Maquina venceu!\n");
      }
      break;
    case 4:
      //Papel vence
      printf("A maquina escolheu %d e o jogador escolheu %d\n", maquina, jogador);
      printf("Papel Vence!\n");
         if (jogador == 1)
      {
        printf("O Jogador Venceu!\n");
      }else{
        printf("A Maquina venceu!\n");
      }

      break;
    case 5:
    //Pedra Vence
      printf("A maquina escolheu %d e o jogador escolheu %d\n", maquina, jogador);
      printf("Pedra Vence!\n");
         if (jogador == 3)
      {
        printf("O Jogador Venceu!\n");
      }else{
        printf("A Maquina venceu!\n");
      }

      break;
    default:
      printf("err");
      break;
    }}

    break;
  
  default:
    break;
  }
  
  return 0; 
}