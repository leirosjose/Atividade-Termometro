#include <stdio.h>
#include <string.h>

int main() {

    char texto[200];

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);

    int tamanho = strlen(texto);

    printf("Quantidade de caracteres: %d\n", tamanho - 1);

    return 0;
}