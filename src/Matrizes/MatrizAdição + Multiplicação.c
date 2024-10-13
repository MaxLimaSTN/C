#include <stdio.h>

int main(){
	
	printf("Multiplicacao de matrizes, onde utiliza a soma de A + B e C + D.\n");
	printf("\n");
	
    // Declaração de vareaveis
	int i, j, x;
	int matrizA[2][3], matrizB[2][3], matrizC[3][2], matrizD[3][2], matrizE[2][3], matrizF[3][2], matrizFinal[2][2];
	
	// Entrada de valores {
	printf("Digite os elementos das matriz A 2x3:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrizA[i][j]);
		}
	}
	printf("Matriz A:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite os elementos das matriz B 2x3:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrizB[i][j]);
		}
	}
    printf("Matriz B:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matrizB[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite os elementos das matriz C 3x2:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			scanf("%d", &matrizC[i][j]);
		}
	}
	printf("Matriz C:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf("%d ", matrizC[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite os elementos das matriz D 3x2:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			scanf("%d", &matrizD[i][j]);
		}
	}
	printf("Matriz D:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf("%d ", matrizD[i][j]);
		}
		printf("\n");
	}
	
	// Soma de A e B:
	for (i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			matrizE[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	
	// Soma de C e D:
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			matrizF[i][j] = matrizC[i][j] + matrizD[i][j];
		}
	}
	
	// Print das somas:
	printf("Soma de A e B = matriz E:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("%d ", matrizE[i][j]);
		}
		printf("\n");
	}
	
	printf("Soma de C e D = matriz F:\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf("%d ", matrizF[i][j]);
		}
		printf("\n");
	}
	
	//multiplicação de E e F:
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			matrizFinal[i][j] = 0;
			for (x = 0; x < 3; x++){
				matrizFinal[i][j] += matrizE[i][x] * matrizF[x][j];
			}
		}
	}
	
	// Print da multiplicação:
	printf("Multiplicacao das matrizes E e F:\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf("%d ", matrizFinal[i][j]);
		}
		printf("\n");
	}
	
 return 0;
}