#include <stdio.h>
int main(){
    int inteiro, triplo , quad, meio;
    printf("Digite um inteiro: ");
    scanf("%d", &inteiro);
   
    printf("int: %d\n", inteiro);
    printf("triplo: %d\n", inteiro*3);
    printf("quadrado: %d\n", inteiro*inteiro);
    printf("metade: %d\n", inteiro/2);

    return 0;
}