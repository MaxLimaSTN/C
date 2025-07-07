#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int count = 0;

void* produtor(void* arg) {
    int item;
    while (1) {
        if (count < BUFFER_SIZE) {
            item = rand() % 100;
            buffer[count] = item;
            printf("Produzido: %d (posição %d)\n", item, count);
            count++;
            sleep(1);
        } else {
            // Espera ocupada
            printf("Buffer cheio. Produtor esperando...\n");
            usleep(500000); // 0.5 segundos
        }
    }
    return NULL;
}

void* consumidor(void* arg) {
    int item;
    while (1) {
        if (count > 0) {
            count--;
            item = buffer[count];
            printf("Consumido: %d (posição %d)\n", item, count);
            sleep(2);
        } else {
            // Espera ocupada
            printf("Buffer vazio. Consumidor esperando...\n");
            usleep(500000); // 0.5 segundos
        }
    }
    return NULL;
}

int main() {
    pthread_t t1, t2;

    pthread_create(&t1, NULL, produtor, NULL);
    pthread_create(&t2, NULL, consumidor, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}
