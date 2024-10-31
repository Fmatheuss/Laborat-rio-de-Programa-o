#include <stdio.h>

int main() {
    const float pi = 3.14159;
    float raio;
    
    printf("Digite o raio do círculo: \n");
    scanf("%f", &raio);

    printf("Diâmetro: %.2f\n", 2 * raio);
    printf("Circunferência: %.2f\n", 2 * pi * raio);
    printf("Área: %.2f\n", pi * raio * raio);

    return 0;
}