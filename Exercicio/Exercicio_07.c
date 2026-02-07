#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

 int matz[3][3], calc = 0;
    //Coloca Numeros aleatórios na matris 
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++){
            matz[i][j] = rand() % 10;
            calc += matz[i][j];
        }        

 //Exibe a Matriz
    printf("\t__Matriz Completa__\n");
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 3; j++)
            printf("\t%d ", matz[i][j]);
        printf("\n");
    }
    
    //Calculo
    printf("Calculo:%d",calc);

}
 
