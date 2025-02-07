#include <stdio.h>

int main(){

    double preco, dinheiro, troco;
    int qtd_produto;

    printf("Digite o preco do produto: ");
    scanf("%lf", &preco);
    printf("Digite a quantidade de produtos: ");
    scanf("%d", &qtd_produto);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (double)(qtd_produto * preco);

    printf("\n");
    printf("TROCO: %.2lf", troco);

    return 0;
}