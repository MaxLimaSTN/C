#include <stdio.h>
#include <string.h>

int main(){

    double largura, comprimento, valor, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terrno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

    area = largura * comprimento;

    preco = area * valor;

    printf("Area do terreno: %.2lf\n", area);
    printf("Preco do terreno: %.2lf", preco);

    return 0;
}