#include <stdio.h>

int main(){

    int a, b, c;

    printf("Primeiro numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("Terceiro numero: ");
    scanf("%d", &c);

    if (a < b && a < c){
        printf("MENOR: %d", a);
    }
    else if (b < a && b < c){
        printf("MENOR: %d", b);
    }
    else{
        printf("MENOR: %d", c);
    }
    return 0;  

}