#include <stdio.h>

int main(){
    int vendas[3], mais_vendido = 0, index_mais_vendido = 0;
    float valores[3], total = 0.00;

    for (int i = 0; i < 3; i++)
    {
        printf("Quantos produtos voce vendeu e o valor deles?:");
        scanf("%d %f", &vendas[i], &valores[i]);
    }
   
    for (int i = 0; i < 3; i++){
        total += vendas[i] * valores[i];
        printf("O produto %d tem %d e seu valor eh %.2f Valor Total R$ %.2f\n",i, vendas[i], valores[i],vendas[i]*valores[i]);
        if (vendas[i] > mais_vendido)
        {
            mais_vendido = vendas[i];
            index_mais_vendido = i;
        }
        
    }
    printf("O Mais vendido: %d, Codigo:%d ", mais_vendido,index_mais_vendido);
    //printf("Total Vendido: R$%.2f\n Comissao: R$%.2f", total, total * 0.05);


    return 0; 
}