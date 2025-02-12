#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portugeses");

    int x = 10;
    int *p;
    int **pp;
    int ***ppp;

    p = &x;
    pp = &p;
    ppp = &pp;

    printf("Conteudo da variavel 'x': %d\n", x);
    printf("Endereco da variavel 'x': %p\n", &x);
    printf("Conteudo do Ponteiro 'p': %p\n", p);
    printf("Endereco do Ponteiro 'p': %p\n", &p);
    printf("Conteudo do Ponteiro 'pp': %p\n", pp);
    printf("Endereco do Ponteiro 'pp': %p\n", &pp);
    printf("Conteudo do Ponteiro 'ppp': %p\n", ppp);
    printf("Endereco do Ponteiro 'ppp': %p\n", &ppp);
    printf("Valor de 'x' apontado pelo Ponteiro 'ppp': %d\n", ***ppp);
    
    return 0;
}