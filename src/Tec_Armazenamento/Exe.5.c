#include <stdio.h>


int main(){

    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);
    
    area = 3.14159 * (raio * raio);

    printf("AREA: %.3lf", area);

    return 0;
}