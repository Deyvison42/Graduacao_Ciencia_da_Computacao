#include <stdio.h>

int main(){

 int index[10][10];

for (int i = 1; i < 10; i++)
    {
      printf("Escreva os numeros do tabuleiro\n");
      scanf("%d,%d\n", &index[i][i],&index[i][i]);
      printf("Numero do I: %d\n", i);
    }
for (int i = 1; i < 10; i++)
{
      printf("%d,%d\n",index[i][i], index[i][i]);
}
};