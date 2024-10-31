#include <stdio.h>

int main()
{

    float cotacao, reais;
    
    printf("Converter reais para dolar.\n");
    printf("Digite o valor da cotacao do dolar:\n");
    scanf("%f", &cotacao);
    
    printf("Digite o valor, em reais, que deseja converter:\n");
    scanf("%f", &reais);
    
    printf("O valor convertido em dolares é %.2f",reais/cotacao);
   
    
    return 0;
}