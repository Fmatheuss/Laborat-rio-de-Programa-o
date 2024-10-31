#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3, mediaarit, mediageo;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

  
    mediaarit = (num1 + num2 + num3) / 3;
    mediageo = pow(num1 * num2 * num3, 1.0 / 3.0);
    
    printf("A média aritmética é: %.2f\n", mediaarit);
    printf("A média geométrica é: %.2f\n", mediageo);

    return 0;
}