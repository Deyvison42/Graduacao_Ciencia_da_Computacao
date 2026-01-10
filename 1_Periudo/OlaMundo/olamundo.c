#include <stdio.h>
/*Em **linguagem C**, a expressão:

```c
#include <stdio.h>
```

tem o seguinte significado técnico:

### `<stdio.h>`

É um **arquivo de cabeçalho (header)** da biblioteca padrão da linguagem C.
O nome **stdio** vem de *Standard Input / Output* (Entrada e Saída Padrão).

### Função principal

Esse cabeçalho declara funções, constantes e tipos usados para **entrada e saída de dados**, como:

* `printf()` – saída de dados formatada
* `scanf()` – entrada de dados
* `getchar()` / `putchar()`
* `fgets()` / `puts()`
* Manipulação de arquivos (`FILE`, `fopen()`, `fclose()`, etc.)

### Por que usar `< >`?

Os sinais `< >` indicam que o compilador deve procurar o arquivo **nas bibliotecas padrão do sistema**, e não no diretório do projeto (como ocorreria com `"stdio.h"`).

### Exemplo prático

```c
#include <stdio.h>

int main() {
    printf("Olá, mundo!");
    return 0;
}
```

Sem incluir `<stdio.h>`, o compilador **não reconheceria** a função `printf`, resultando em erro ou comportamento indefinido.

### Resumo

* `<stdio.h>` = biblioteca padrão de entrada e saída
* Essencial para imprimir na tela e ler dados
* Parte fundamental de praticamente todo programa em C

Se quiser, posso explicar outros headers comuns como `stdlib.h`, `string.h` ou `math.h`.
 */

 int main() {
    /*printf mostra a mensagem */ 
    printf("Ola Mundo!\n");
return 0;
}