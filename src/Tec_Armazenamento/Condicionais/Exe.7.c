#include <stdio.h>

int main(){

    double distancia1, distancia2, distancia3, maior;

    printf("Digite as tres distancia: ");
    scanf("%lf %lf %lf", &distancia1, &distancia2, &distancia3);

    if (distancia1 > distancia2 && distancia1 > distancia3){
        maior = distancia1;
    }
    else if (distancia2 > distancia1 && distancia2 > distancia3){
        maior = distancia2;
    }
    else{ 
        maior = distancia3;
    }

    printf("MAOIR DISTANCIA: %.2lf\n", maior);
    
    return 0;
}