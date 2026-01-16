#include  <stdio.h>

int main(void)

{
  char produtoA[30] = "Akira";
  char produtoB[30] = "Berserk";

  unsigned int estoqueA = 1000;
  unsigned int estoqueB = 200;

  float valorA = 55.99;
  float valorB = 35.49;
  unsigned int estoque_minimoA = 100;
  unsigned int estoque_minimoB = 100;

  double Valor_totalA, Valor_totalB;
  double Valor_do_EstoqueA, Valor_do_EstoqueB;


  printf("O produto %s possui um estoque de %d unidades e o valor unitario de %.2f R$\n", produtoA, estoqueA, valorA);
  printf("O produto %s possui um estoque de %d unidades e o valor unitario de %.2f R$\n", produtoB, estoqueB, valorB);
  
  //comparação

  Valor_totalA = estoqueA > estoque_minimoA;
  Valor_totalB = estoqueB > estoque_minimoB;

  printf("O produto %s tem estoque minimo %1.f\n", produtoA, Valor_totalA);
  printf("O produto %s tem estoque minimo %1.f\n", produtoB, Valor_totalB);

  //Comparação de Valores

  Valor_do_EstoqueA = estoqueA * valorA;
  Valor_do_EstoqueB = estoqueB * valorB;

  

  printf("O valor total de %s, %2.f$ é maior que o valor total de %s, %2.fR$? %d\n",produtoA, Valor_do_EstoqueA, produtoB, Valor_do_EstoqueB,(Valor_do_EstoqueA>Valor_do_EstoqueB));


  return 0;

}