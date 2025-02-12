#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *num , i;
	
	num = (int*) malloc(5 * sizeof(int));
	
	if (num == NULL){
		printf("Erro ao alocar memória:\n");
		
	   	return 1;
   	}
	
	for (i = 0; i < 5; i++){
		num[i] = i * 10;
	}
	
	num = (int*) realloc(num, 10 * sizeof(int));
	if (num == NULL){
		printf("Erro ao realocar memória:\n");
		
		free(num);
		return 1;
	}
	
	for (i = 5; i < 10; i++){
		num[i] = i * 5;
	}
	
	printf("Valores do array:\n");
	for (i = 0; i < 10; i++){
		printf("%d ", num[i]);
	}
	printf("\n");
	
	free(num);
	
	return 0; 
}