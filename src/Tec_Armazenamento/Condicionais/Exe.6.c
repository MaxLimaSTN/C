#include <stdio.h>

int main(){

    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    printf("Classificacao: ");

    if (glicose <= 100){
        printf("Normal\n");
    }
    else if (glicose <= 140){
        printf("Elevado\n");
    }
    else{
        printf("Diabetes\n");
    }
    
    return 0;
}