#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int *numeros; 
    int i;

    numeros = (int*) malloc(10 * sizeof(int));

    if (numeros == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        numeros[i] = 2 * (i + 1);
    }

    printf("Numeros pares no vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros);

    return 0;
}