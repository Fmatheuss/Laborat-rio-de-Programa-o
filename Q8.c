#include <stdio.h>

int main()
{
    
    int valor;
    
    printf("Saber os números antecessor e sucessor.\n");
    printf("Digite o valor que deseja saber o antecessor e o sucessor:\n");
    scanf("%d", &valor);
    
    printf("O antecessor é %d\nO sucessor é %d",valor-1,valor+1);
   
    
    return 0;
}