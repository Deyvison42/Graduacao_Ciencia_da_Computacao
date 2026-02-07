#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int matz[5][5] = {0}, index = 0;

  srand(time(NULL));

  for (size_t i = 0; i < 5; i++)
    for (int j = 0; j < 5; j++)
      matz[i][j] = rand() % 10;


  for (int i = 0; i < 5|\\\
    for ( int j = 0; j < 5; j++){
      {
       matz[i][j] = index
      }
      
      
    }


  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++)
       printf("\t%d", matz[i][j]);
    printf("\n");
  }


  }