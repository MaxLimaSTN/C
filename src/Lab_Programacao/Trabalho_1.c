#include <stdio.h>
#include <stdlib.h>

int calcularDeterminante(int **matriz, int n);

int main() {


    int n, i, j;
    int **matriz;
    char continuar;

    do {
        printf("Informe a ordem da matriz (n x n): ");
        scanf("%d", &n);

        matriz = (int **)malloc(n * sizeof(int *));
        for (i = 0; i < n; i++) {
            matriz[i] = (int *)malloc(n * sizeof(int));
        }

        printf("Informe os elementos da matriz %dx%d:\n", n, n);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("Elemento [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Matriz informada:\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

        int det = calcularDeterminante(matriz, n);
        printf("O determinante da matriz e: %d\n", det);

        printf("Deseja calcular o determinante de outra matriz? (s/n): ");
        scanf(" %c", &continuar);
        
        for (i = 0; i < n; i++) {
            free(matriz[i]);
        }
        free(matriz);

    } while (continuar == 's' || continuar == 'S');
    
    return 0;
}

int calcularDeterminante(int **matriz, int n) {
    if (n == 1) {
        return matriz[0][0]; 
    }

    int det = 0;
    int sinal = 1;
    int **menor;
    
    menor = (int **)malloc((n - 1) * sizeof(int *));
    for (int i = 0; i < n - 1; i++) {
        menor[i] = (int *)malloc((n - 1) * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            int colunaMenor = 0;
            for (int k = 0; k < n; k++) {
                if (k != i) {
                    menor[j - 1][colunaMenor] = matriz[j][k];
                    colunaMenor++;
                }
            }
        }

        det += sinal * matriz[0][i] * calcularDeterminante(menor, n - 1);
        sinal = -sinal; 
    }

    for (int i = 0; i < n - 1; i++) {
        free(menor[i]);
    }
    free(menor);

    return det;
}