int main(){
    float conta;
    printf("Digite o valor da conta: ");
    scanf("%f", &conta);
    printf("O valor total a ser pago é: %.2f\n", conta + (conta*0.1));
    return 0;
} 