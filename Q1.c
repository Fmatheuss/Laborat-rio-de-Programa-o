#include <stdio.h>

int main() {
    
    int dec;

    printf("Digite um valor decimal: ");
    scanf("%d", &dec);

    printf("Hexadecimal: %#X\n", dec);
    printf("Octal: %o\n", dec);

    return 0;
}