#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("%d %s\n", numero, (numero % 2 == 0) ? "é par" : "é ímpar");

    return 0;
}