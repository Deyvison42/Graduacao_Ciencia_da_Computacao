#include <stdio.h>
 
// Função genérica para entrada de dados
void entradaDados() {
    // código para a função entradaDados
}
 
// Função genérica para cálculo da média
float calcularMedia() {
    // código para a função calcularMedia
}
 
// Função genérica para exibir dados
void exibirMedia(float media) {
    printf("Média: %.2f\n", media);
}
int main() {
 
    entradaDados(_ARGMAX);
    float media = calcularMedia();
    exibirMedia(media);

    return 0;
}