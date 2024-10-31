#include <stdio.h>

int main() {
    int dias;
    float diaria = 50.25;
    float bruto, gratific, imposto, liquido;

    printf("Digite o número de dias trabalhados:\n ");
    scanf("%d", &dias);

    bruto = dias * diaria;

    if (dias <= 10) {
        gratific = 0;
    } else if (dias <= 20) {
        gratific = bruto * 0.2;
    } else {
        gratific = bruto * 0.3;
    }

    imposto = (bruto + gratific) * 0.1;

    liquido = bruto + gratific - imposto;
    
    printf("O total bruto é %.2f\n",bruto + gratific);
    printf("O total do imposto é %.2f", imposto);
    printf("O salário líquido a ser pago: R$ %.2f", liquido);

    return 0;
}