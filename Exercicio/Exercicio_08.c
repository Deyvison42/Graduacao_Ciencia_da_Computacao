#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
// Aula 124 - Exercício 2: Crie um programa que preencha uma matriz 5X10 com numeros inteiros. Em seguida fa�a:
    // a) some cada uma das linhas armazenando o resultado em um vetor;
    // b) some cada uma das colunas armazenando o resultado em um vetor;
    // c) Imprima a matriz e os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.

    srand(time(NULL));
    int matz[2][3], line[2] = {0}, colun[3] = {0};

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            matz[i][j] = rand() % 10 ;


    //calc Linha
    for (int i = 0; i < 2; i++){
         for (int j = 0; j < 3; j++)
            line[i] += matz[i][j];
    }   

    //Calc Coluna
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            colun[j] += matz[i][j];
        }
    }
    printf("---Matriz---\n");
    for (int i = 0; i < 2; i++){
       for (int j = 0; j < 3; j++)
        printf("\t%d ", matz[i][j]);
    printf("\n");
    }

    printf("---Calc Matriz---\n");

    for (int i = 0; i < 2; i++)
        printf("Linha %d: %d\n",i, line[i]); 
    for (int i = 0; i < 3; i++)
        printf("Coluna %d: %d\n",i, colun[i]);

}
 
