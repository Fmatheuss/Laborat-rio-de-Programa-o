
#include <stdio.h>

int main() {
    int num, centena, dezena, unidade, numInvertido;

    printf("Digite um número de três dígitos: ");
    scanf("%d", &num);

    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = num / 100;

    numInvertido = unidade * 100 + dezena * 10 + centena;

    printf("O número invertido é: %d\n", numInvertido);

    return 0;
}