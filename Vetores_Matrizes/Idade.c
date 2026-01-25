#include <stdio.h>

int main(){
  int idade[5] = {12,44,45,5,65};
  int maxIdade = 0;
  int minIdade;

  for (int i = 0; i < 5; i++)
    {
      if (maxIdade < idade[i])
      {
        maxIdade = idade[i];
      }
    }

  for (int j = 0; j < 5; j++)
  {

     if (minIdade > idade[j])
     {
       minIdade = idade[j];
     }
  }
        printf("A idade maxima ‚: %d\n", maxIdade);
        printf("A idade minima ‚: %d\n", minIdade);

}