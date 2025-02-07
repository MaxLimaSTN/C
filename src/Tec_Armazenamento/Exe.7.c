#include <stdio.h>

int main(){

    int distancia;
    double gasto, gastoMedio;

    printf("Distancia pecorrida: ");
    scanf("%d", &distancia);

    printf("Combustivel gasto: ");
    scanf("%lf", &gasto);

    gastoMedio = distancia / gasto;

    printf("Consumo medio: %.3lf", gastoMedio);

    return 0;
}