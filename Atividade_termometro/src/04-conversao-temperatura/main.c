#include <stdio.h>

int main() {

    float temperatura;
    int opcao;

    printf("Escolha a conversao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    if (opcao == 1) {
        float f = (temperatura * 9/5) + 32;
        printf("Temperatura em Fahrenheit: %.2f\n", f);
    } 
    else if (opcao == 2) {
        float c = (temperatura - 32) * 5/9;
        printf("Temperatura em Celsius: %.2f\n", c);
    } 
    else {
        printf("Opcao invalida\n");
    }

    return 0;
}