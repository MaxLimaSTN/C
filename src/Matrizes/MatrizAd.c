#include <stdio.h>

int main(){
	
	// Declaração de vareaveis:
	int matrizA[2][3], matrizB[3][2], matrizSoma[3][3], i, j;
	
	// Entrada de valores:
	printf("Digite os elementos da matriz A:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrizA[i][j]);
		}
	}
	
	printf("Digite os elementos da matriz B:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrizB[i][j]);
		}
	}
	
	// Soma das matrizes:
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	
	// Print da soma:
	printf("\nSoma das matrizes:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matrizSoma[i][j]);
		}
		printf("\n");
	}
	
	return 0; 
}