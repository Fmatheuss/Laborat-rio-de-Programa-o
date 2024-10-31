#include <stdio.h>

int main() {
    float cel, fah;
   
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &cel);
  
    fah = (9 * cel + 160) / 5;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", cel, fah);

    return 0;
}