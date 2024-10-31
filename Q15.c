#include <stdio.h>

int main() {
    float vhora, horas, bruto, inss, liquido, valorinss;


    printf("Digite o valor da hora-aula: R$ ");
    scanf("%f", &vhora);

    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horas);

    printf("Digite o percentual de desconto do INSS (em decimal, exemplo: 0.075, 0.12, 0.14): ");
    scanf("%f", &inss);

    bruto = vhora * horas;

    valorinss = bruto * inss;

    liquido = bruto - valorinss;

    printf("\nSalário Bruto: R$ %.2f\n", bruto);
    printf("Valor do INSS: R$ %.2f\n", valorinss);
    printf("Salário Líquido: R$ %.2f\n", liquido);

    return 0;
}