#include <stdio.h>

#define TAM 11

int main() {
    int tabuleiro[TAM][TAM];
    int jogador[TAM][TAM], alvo1, alvo2;

    

    // Inicializa o tabuleiro com 0 (mar)
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //NAVIO
    int navio = 3;
    
    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        tabuleiro [8][j + 3] = navio;
    
      }
    }

    for (int i = 0; i < 3; i++){
      for (int j = 0; j < 3; j++){
        tabuleiro [i + 2][7] = navio;
    
      }
    } 
    for (int i = 0; i < 10; i++){
      for (int j = 0; j < 10; j++)
      {
        tabuleiro[0][j] = j;
      }
    }
    // Exibe o tabuleiro
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    //Jogador
    printf("Onde quer jogar?");
    scanf("%d", &alvo1);
    scanf("%d", &alvo2);
}