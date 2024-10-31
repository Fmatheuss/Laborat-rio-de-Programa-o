#include <stdio.h>

int main()
{
    int seg, min, horas, total;
    
    printf("Digite o total de horas:\n");
    scanf("%d", &horas);
    
    printf("Digite o total de minutos:\n");
    scanf("%d", &min);
    
    printf("Digite o total de segundos:\n");
    scanf("%d", &seg);
    
    total = (horas*3600) + (min*60) + seg;
    printf("O tempo total em segundos é: %d", total);
    
    return 0;
}