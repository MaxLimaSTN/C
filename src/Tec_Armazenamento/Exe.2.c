#include <stdio.h>
#include <math.h>


int main(){

    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    area =  base * altura;

    printf("\n\n");
    printf("AREA: %.4lf\n", area);

    perimetro = 2 * (base + altura);

    printf("PERIMETRO: %.4lf\n", perimetro);

    diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("DIAGONAL: %.4lf", diagonal);

    return 0;
}
