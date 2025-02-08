#include <stdio.h>

int main(){

    int qtd;
    double preco, dinheiro, troco, faltam;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    if(preco * qtd > dinheiro){
        faltam = preco * qtd - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", faltam);
    }
    else{
        troco = dinheiro - preco * qtd;
        printf("TROCO = %.2lf\n", troco);
    }

    return 0;
}