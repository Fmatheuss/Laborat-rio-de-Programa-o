#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("%d %s múltiplo de %d\n", num1, (num1 % num2 == 0) ? "é" : "não é", num2);

    return 0;
}