#include <stdio.h>

int main(){
	
	// Declaração de vareaveis:
	int i, j, x;
	int matrizA[3][3], matrizB[3][3], matrizC[3][3];
	
    // Entrada de valores:
	printf("Digite os elementos das matriz A:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrizA[i][j]);
		}
	}
	// Print da matriz A:
	printf("Matriz A:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite os elementos das matriz B:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrizB[i][j]);
		}
	}
	// Print da matriz B: 
    printf("Matriz B:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matrizB[i][j]);
		}
		printf("\n");
	}
	
	// Multiplicação das matrizes:
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			
			matrizC[i][j] = 0;
			for (x = 0; x < 3; x++){
			matrizC[i][j] += matrizA[i][x] * matrizB[x][j];
			}	
		}
	}
	
	// Print da multiplicação:
	printf("Multiplicacao das matrizes A e B:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matrizC[i][j]);
		}
		printf("\n");
	}

    
 return 0;
}