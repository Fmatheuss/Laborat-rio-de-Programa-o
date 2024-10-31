#include <stdio.h>
#include <math.h>

int main() {
    int num, valor;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    valor = (int)fabs(num);

    printf("O valor absoluto de é %d\n", valor);
    return 0;
}