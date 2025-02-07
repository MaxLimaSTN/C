#include <stdio.h>

int main(){

    double nota1, nota2, notaFinal;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a seginda nota: ");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;

    if (notaFinal < 60.00){
        printf("NOTA FINAL: %.1lf \n", notaFinal);
        printf("REPROVADO");
    }
    else{
        printf("NOTA FINAL: %.1lf \n", notaFinal);
        printf("APROVADO");
    }
    return 0;
}