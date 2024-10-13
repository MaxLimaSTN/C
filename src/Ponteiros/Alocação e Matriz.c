#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STATIC_SIZE 50
#define MIN_STATIC_SIZE 10


int getMaxStaticSize(){
    time_t t = time(NULL);
    struct tm *currentTime = localtime(&t);
    int hour = currentTime->tm_hour;

    if (hour < 12){
        return MIN_STATIC_SIZE;
    }
    else if (hour < 18){
        return (MIN_STATIC_SIZE + MAX_STATIC_SIZE) / 2;
    }
    else{
        return MAX_STATIC_SIZE;
    }
}


void multiplicacaoMatrizes(int matriz1[][MAX_STATIC_SIZE], int matriz2[][MAX_STATIC_SIZE], int resultado[][MAX_STATIC_SIZE], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            resultado[i][j] = 0;
            for (int k = 0; k < size; k++){
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void multiplicacaoMatrizesDinamica(int **matriz1, int **matriz2, int **resultado, int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            resultado[i][j] = 0;
            for (int k = 0; k < size; k++){
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}


void buscarElemento(int mat[][MAX_STATIC_SIZE], int size, int elemento){
    int busca = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (mat[i][j] == elemento){
                printf("Elemento %d encontrado na posicao [%d, %d]\n", elemento, i, j);
                busca = 1;
            }
        }
    }
    if (!busca){
        printf("Elemento %d nao encontrado na matriz.\n", elemento);
    }
}


void buscarElementosDinamico(int **mat, int size, int elemento){
    int busca = 0;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (mat[i][j] == elemento){
                printf("Elemento %d encontrado na posicao [%d, %d]\n", elemento, i, j);
                busca = 1;
            }
        }
    }
    if (!busca){
        printf("Elemento %d nao encontrado na matriz.\n", elemento);
    }
}

void staticMode(){
    int maxSize = getMaxStaticSize();
    int vetor[maxSize];
    int matriz1[MAX_STATIC_SIZE][MAX_STATIC_SIZE], matriz2[MAX_STATIC_SIZE][MAX_STATIC_SIZE], resultado[MAX_STATIC_SIZE][MAX_STATIC_SIZE];
    int opcao;

    printf("Modo Estático: O limite de elementos e %d\n\n", maxSize);
    printf("Escolha a operacao desejada.\n");
    printf("1 - Soma de elementos.\n");
    printf("2 - Multiplicacao de elementos.\n\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao){

    case 1:

        printf("Modo Estático: O limite de elementos e %d\n", maxSize);
        printf("Insira o numero de elementos a serem processados: ");

        int n;
        scanf("%d", &n);

        if (n > maxSize){
            printf("Erro: Nao e possível processar mais de %d elementos no modo estatico.\n", maxSize);
            return;
        }

        printf("Insira %d elementos:\n", n);
        for (int i = 0; i < n; i++){
            scanf("%d", &vetor[i]);
        }

        int soma = 0;
        for (int i = 0; i < n; i++){
            soma += vetor[i];
        }

        printf("Soma dos elementos: %d\n", soma);
        break;

    case 2:

        printf("Insira o tamanho da matriz quadrada (maximo %d): ", maxSize);

        int size;
        scanf("%d", &size);

        if (size > maxSize){
            printf("Erro: Nao e possível processar mais de %d elementos no modo estatico.\n", maxSize);
            return;
        }

        printf("Insira os elementos da matriz 1 (%d x %d):\n", size, size);
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                scanf("%d", &matriz1[i][j]);
            }
        }

        printf("Insira os elementos da matriz 2 (%d x %d):\n", size, size);
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                scanf("%d", &matriz2[i][j]);
            }
        }

        multiplicacaoMatrizes(matriz1, matriz2, resultado, size);

        printf("Resultado da multiplicacao das matrizes:\n");
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }

        printf("Deseja buscar um elemento na matriz resultante? (1-Sim, 0-Nao): ");

        int resposta;
        scanf("%d", &resposta);

        if (resposta == 1){
            int elemento;
            printf("Insira o elemento a ser buscado: ");
            scanf("%d", &elemento);
            buscarElemento(resultado, size, elemento);
        }
        break;
    }
}

void dynamicMode()
{

    int opcao;
    int size;
    int n;

    printf("Modo Dinamico:\n\n");
    printf("Escolha a operacao desejada.\n");
    printf("1 - Soma de elementos.\n");
    printf("2 - Multiplicacao de elementos.\n\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao){

    case 1:

        

        printf("Insira o numero de elementos a serem processados: ");
        scanf("%d", &n);

        int *vetor = (int *)malloc(n * sizeof(int));

        if (vetor == NULL){
            printf("Erro ao alocar memoria!\n");
            return;
        }

        printf("Insira %d elementos:\n", n);
        for (int i = 0; i < n; i++){
            scanf("%d", &vetor[i]);
        }

        int soma = 0;

        for (int i = 0; i < n; i++){
            soma += vetor[i];
        }

        printf("Soma dos elementos: %d\n", soma);
        printf("Deseja adicionar mais elementos? (1-Sim, 0-Nao): ");

        int resposta;

        scanf("%d", &resposta);

        if (resposta == 1)
        {

            int novoTamanho;

            printf("Quantos elementos adicionais? ");
            scanf("%d", &novoTamanho);

            vetor = (int *)realloc(vetor, (n + novoTamanho) * sizeof(int));

            if (vetor == NULL){
                printf("Erro ao realocar memoria!\n");
                return;
            }

            printf("Insira os %d novos elementos:\n", novoTamanho);
            for (int i = n; i < n + novoTamanho; i++){
                scanf("%d", &vetor[i]);
            }

            for (int i = n; i < n + novoTamanho; i++){
                soma += vetor[i];
            }

            printf("Nova soma dos elementos: %d\n", soma);
        }

        free(vetor);
        break;

    case 2:

        printf("Insira o tamanho da matriz quadrada: ");
        scanf("%d", &size);

        int **matriz1 = (int **)malloc(size * sizeof(int *));
        int **matriz2 = (int **)malloc(size * sizeof(int *));
        int **resultado = (int **)malloc(size * sizeof(int *));

        for (int i = 0; i < size; i++){
            matriz1[i] = (int *)malloc(size * sizeof(int));
            matriz2[i] = (int *)malloc(size * sizeof(int));
            resultado[i] = (int *)malloc(size * sizeof(int));
        }

        printf("Insira os elementos da matriz 1 (%d x %d):\n", size, size);
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                scanf("%d", &matriz1[i][j]);
            }
        }

        printf("Insira os elementos da matriz 2 (%d x %d):\n", size, size);
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                scanf("%d", &matriz2[i][j]);
            }
        }

        multiplicacaoMatrizesDinamica(matriz1, matriz2, resultado, size);
        printf("Resultado da multiplicacao das matrizes:\n");
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                printf("%d ", resultado[i][j]);
            }
            printf("\n");
        }

        printf("Deseja buscar um elemento na matriz resultante? (1-Sim, 0-Nao): ");
        scanf("%d", &resposta);

        if (resposta == 1){
            int elemento;
            printf("Insira o elemento a ser buscado: ");
            scanf("%d", &elemento);
            buscarElementosDinamico(resultado, size, elemento);
        }

        for (int i = 0; i < size; i++){
            free(matriz1[i]);
            free(matriz2[i]);
            free(resultado[i]);
        }
        free(matriz1);
        free(matriz2);
        free(resultado);
        break;
    }
}


int main()
{
    clock_t inicio, fim;
    double tempo_gasto;

    inicio = clock();

    int modo;
    printf("Escolha o modo de operacao:\n");
    printf("1 - Modo Estatico\n");
    printf("2 - Modo Dinamico\n");
    printf("Modo: ");
    scanf("%d", &modo);

    if (modo == 1){
        staticMode();
    }
    else if (modo == 2){
        dynamicMode();
    }
    else{
        printf("Modo invalido!\n");
    }

    fim = clock();

    tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo gasto: %f segundos\n", tempo_gasto);

    return 0;
}
