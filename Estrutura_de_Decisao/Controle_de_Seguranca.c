#include <stdio.h>

int main (){

  char livro1[30] = "Berserk", livro2[30] = "Akira";
  unsigned int estoque_total, livro1_quantidade, livro2_quantidade;
  float temperatura, umidade;

  printf("Qual a temperatura atual?: ");
  scanf("%f", &temperatura);

  printf("Qual a umidade do local?: ");
  scanf("%f", &umidade);

  printf("Quantos livros do %s tem em estoque: ", livro1);
  scanf("%d", &livro1_quantidade);

   printf("Quantos livros do %s tem em estoque: ", livro2);
  scanf("%d", &livro2_quantidade);


//calculo do estoque
  estoque_total  = livro1_quantidade + livro2_quantidade;

//controle de temperatura
  if (temperatura <= 15)
  {
    printf("TA FRIO PRA CARALHOOO!\n");
  }
  if (temperatura >= 30)
  {
    printf("Esta quente!\n");
  }else{
    printf("Esta frio!\n");
  }

  //controle de umidade
  if (umidade >= 50)
  {
    printf("Umidade esta = Elevada!\n");
  }else{
    printf("Umidade esta = Normal\n");
  }
  //controle de estoque
  if (estoque_total <= 30)
  {
    printf("O Estoque dos Livros %s e %s esta baixo\n", livro1, livro2);
    printf("Tem no Total %d Livros disponiveis!\n", estoque_total);
    printf("com %d do %s e %d do %s", livro1_quantidade, livro1, livro2_quantidade, livro2);
  }else{
    printf("O Estoque esta em dias!\n");
    printf("Tem no Total %d\n", estoque_total);
    printf("com %d do %s e %d do %s", livro1_quantidade, livro1, livro2_quantidade, livro2);
  }
  
  return 0;
  
}