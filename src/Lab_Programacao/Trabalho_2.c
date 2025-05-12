#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int charParaValor(char c) {
    if (isdigit(c))
        return c - '0';
    else if (isalpha(c))
        return toupper(c) - 'A' + 10;
    return -1;
}


int conversao(const char* numero, int base) {
    int comprimento = strlen(numero);
    int resultado = 0;

    for (int i = 0; i < comprimento; i++) {
        int valor = charParaValor(numero[i]);
        if (valor < 0 || valor >= base) {
            printf("Caractere invalido '%c' para base %d\n", numero[i], base);
            return -1;
        }
        resultado = resultado * base + valor;
    }

    return resultado;
}

int main() {
    
    char numero[100];
    int base;

    printf("Digite a base de origem (2 a 36): ");
    scanf("%d", &base);
    
    printf("Digite o número: ");
    scanf("%s", numero);


    if (base < 2 || base > 36) {
        printf("Base invalida.\n");
        return 1;
    }

    int decimal = conversao(numero, base);
    if (decimal != -1) {
        printf("O numero em decimal e: %d\n", decimal);
    }

    return 0;
}