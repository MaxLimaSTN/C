#include <stdio.h>

int main(){
	
	// Declaração de vareaveis:
	int matrizA[3][3], matrizTransposta[3][3], i, j;
	
    // Entrada de valores:
	printf("Digite os elementos da matriz 3x3:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrizA[i][j]);
		}
	}
	
    // Transposição da matriz:
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			matrizTransposta[j][i] = matrizA[i][j];
		}
	}
	
    // Print da matriz original:
    printf("Matriz Original\n");
    for (i = 0; i < 3; i++){
    	for (j = 0; j < 3; j++){
    		printf("%d ", matrizA[i][j]);
		}
		printf("\n");
	}
	
    // Print da matriz transposta:
	printf("\nMatriz Transposta:\n");
	for (i = 0; i < 3; i++){
		for (j = 0;j < 3; j++){
			printf("%d ", matrizTransposta[i][j]);
		}
		printf("\n");
	}
	return 0;
}
