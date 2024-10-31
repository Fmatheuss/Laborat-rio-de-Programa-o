#include <stdio.h>

int main()
{
    float num1, num2,divisao,frac,resto;
    
    ;
    printf("Digite o valor do primeiro numero:\n");
    scanf("%f", &num1);
    
    printf("Digite o valor do segundo numero:\n");
    scanf("%f", &num2);
    
    
    divisao = num1 / num2;

    frac = divisao - (int)divisao;

    resto = frac * num2;
    
    printf("A soma é %.2f\n",num1 + num2);
    printf("O produto é %.2f\n",num1*num2);
    printf("A diferença é %.2f(prevalecendo a ordem de entrada dos numeros)\n",num1-num2);
    printf("O quociente é %.2f(prevalecendo a ordem de entrada dos numeros)\n",divisao);
    printf("O resto da divisao é %.2f(prevalecendo a ordem de entrada dos numeros)\n",resto);
   
    
    return 0;
}