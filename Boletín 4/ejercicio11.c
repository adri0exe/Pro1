#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

void CrearArray(int *array);
void PrintArray(int *array);
int SumaArray(int *array, int k);

int main() {
    int array[MAX];
    int suma = 0;

    srand(time(NULL));

    printf("------ SUMA ARRAY FUNCION RECURSIVA ------");

    CrearArray(array);
    PrintArray(array);
    suma = SumaArray(array, 0);

    printf("\nLa suma del array es: %d", suma);

    return 0;
}

void CrearArray(int *array) {
    for (int i = 0; i < MAX; i++) {
        array[i] = rand() % 10;
    }
}

void PrintArray(int *array) {
    printf("\n\n\n--- ARRAY ---\n");

    for (int i = 0; i < MAX; i++) {
        printf("[%d]", array[i]);
    }
}

int SumaArray(int *array, int k) {
    if (k == MAX) {
        return 0;
    }

    return array[k] + SumaArray(array, k + 1);
}