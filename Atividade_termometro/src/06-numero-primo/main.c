#include <stdio.h>

int main() {

    int numero;
    int primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        primo = 0;
    }

    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo == 1) {
        printf("O numero eh primo\n");
    } else {
        printf("O numero nao eh primo\n");
    }

    return 0;
}