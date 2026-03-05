#include <stdio.h>

int main() {

    int n;
    int resultado = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    printf("Fatorial = %d\n", resultado);

    return 0;
}