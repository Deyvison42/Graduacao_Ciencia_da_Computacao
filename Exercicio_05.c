#include <stdio.h>
#include <stdlib.h>

int main(){   // Aula 124 - Exerc�cio 1: Fa�a um programa que calcule a soma de todos os elementos de uma matriz.

    int matz[10][10] = {0};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", matz[i][j]);
        }
        printf("\n");
    }

}
