#include <stdio.h>

int main()
{
    float altura, largura, comprimento;
    
    printf("Saber o volume de uma caixa.\n");
    printf("Digite o valor do comprimento (cm):\n");
    scanf("%f", &comprimento);
    
    printf("Digite o valor da largura (cm):\n");
    scanf("%f", &largura);
    
    printf("Digite o valor da altura (cm):\n");
    scanf("%f", &altura);
    
    printf("O volume da caixa é %.2f",comprimento*largura*altura);
   
    
    return 0;
}