#include <stdio.h>

int main(){
  int index;
  char * nomesAlunos [3][3] = {
    {/*[0][0]*/"Aluno 1",/*[0][1]*/ "Pt: 30",/*[0][2]*/ "Mat: 40"},
    {/*[1][0]*/"Aluno 2",/*[1][1]*/ "Pt: 50",/*[1][2]*/ "Mat: 20"},
    {/*[2][0]*/"Aluno 3",/*[2][1]*/ "Pt: 90",/*[2][2]*/ "Mat: 90"}
  };
  printf("Digite o numero do aluno que quer ver a nota\n");
  printf("1 - Aluno 1\n 2 - Aluno 2\n 3 - Aluno 3\n");
  scanf("%d" , &index);
  index--;

 printf("As notas do %s sao: %s , %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
  return 0;
    
};