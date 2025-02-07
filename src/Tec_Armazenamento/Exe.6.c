#include <stdio.h>

int main(){

    char nome[50];
    int horas;
    double valor, pagamento;

    printf("Nome: ");
    gets(nome);
    printf("Valor por horas: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valor * horas;

    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);

    return 0;
}