#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int *numeros, i;
	
	numeros = (int*) calloc(8, sizeof(int));
	
	if (numeros == NULL){
		
		printf("Erro na alocação de memoria!\n");
		
		return 1;
	}
	
	printf("Inicialiazacao em zeros:\n");
	for (i = 0; i < 8; i++){
		printf("%d ", numeros[i]);
	}
	printf("\n");
	
	for (i = 0; i < 8; i++){
		numeros[i] = 1 * (i + 1);
	}
	
	printf("Numeros alocados:\n");
	for (i = 0; i < 8; i++){
		printf("%d ", numeros[i]);
	}
	free(numeros);
	
	return 0;
}