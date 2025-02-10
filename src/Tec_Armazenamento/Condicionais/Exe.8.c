#include <stdio.h>

void Celsius(){

    double C, F;

    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &C);

    F = C * 1.8 + 32;

    printf("Temperatura equivalente em Fahrenheit: %,2lf", F);
}

void Fahrenheit(){

    double C, F;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &F);

    C = 5.0 / 9.0 * (F - 32);
    
    printf("Temperatura equivalente em Celsius: %,2lf", C);
}

int main(){

    char opcao;

    printf("Voce vai digitar a temperatura em qual escala (C/F)?: ");
    scanf("%c", &opcao);

    if (opcao == 'C'){
        Celsius();
    }
    else if (opcao == 'F'){
        Fahrenheit();
    }
    else{
        printf("Opcao Invalida.");
    }
    
    return 0;
}