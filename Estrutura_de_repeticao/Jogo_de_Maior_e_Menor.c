#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
  int opcao, opcao2, menu1 = 1 , contador, computador, resultado_jogador;
  int jogador;
  srand(time(NULL));


  while (menu1 <= 1)
  {  

  printf("---Jogo Double---\n 1 - Iniciar jogo\n 2 - regras\n 3 - Sair\n");
  scanf("%d", &opcao);

    switch (opcao)
    {
      //Inicio do Jogo
      case 1:
      //Gerador de numero aleatório pra o computador e jogador
      for (int i = 1; i < 2; i++)
      {
       computador = rand() % 100;
       resultado_jogador = rand() % 100;
      }
      //Escolha do jogador
        printf("voce seleciou a opcao 1\n\n");
        printf("Escolha entre:\n 1 - maior\n 2 - Menor\n 3 - Igual\n");
        scanf ("%d", &jogador);
      switch (jogador)
      {
        case 1:
        //O jogador escolheu maior
          printf("O jogador jogou %d\n", resultado_jogador);
          printf("O computador jogou %d\n", computador);
          resultado_jogador > computador ? printf("---Voce ganhou!---\n") : printf("---O computador ganhou!---\n");
          printf("quer jogar denovo?\n 1 - Sim\n 2 - Nao\n");
          scanf("%d", &opcao2);
          if (opcao2 == 1)
          {
            printf("continuando...\n");
          }else
          {
            printf("Saindo do Jogo...\n");
            menu1++;
          }
        break;
        case 2:
        // O Jogador escolheu maior
          printf("O jogador jogou %d\n", resultado_jogador);
          printf("O computador jogou %d\n", computador);
          resultado_jogador < computador ? printf("---Voce ganhou!---\n") : printf("---O computador ganhou!---\n");
          printf("quer jogar denovo?\n 1 - Sim\n 2 - Nao\n");
          scanf("%d", &opcao2);
          if (opcao2 == 1)
          {
            printf("continuando...\n");
          }else
          {
            printf("Saindo do Jogo...\n");
            menu1++;
          }
        break;
        case 3:
        //O Jogador escolheu igual
         printf("O jogador jogou %d\n", resultado_jogador);
          printf("O computador jogou %d\n", computador);
          resultado_jogador == computador ? printf("---Voce ganhou!---\n") : printf("---O computador ganhou!---\n");
          printf("quer jogar denovo?\n 1 - Sim\n 2 - Nao\n");
          scanf("%d", &opcao2);
         opcao2 = 1 ? printf("continuando...") : printf("Saindo...",menu1++);
        default:
        break;
      }
    break;
    //REGRAS
    case 2:
      for (int i = 0; i < contador; i++)
      {
        printf(" Escolha uma entre Maior, Menor ou igual\n e o computador vai escolher um numero\n o numero coicir com oque voce escolheu\n voce ganha!\n");
        printf("pressione 1 para voltar: ");
        scanf("%d", &contador);
      }      
    break;
    case 3:
        printf("saindo do jogo...\n");
    menu1++;
    break;
    default:printf("Opcao invalida!\n \n");
    }
  }

  return 0;
}