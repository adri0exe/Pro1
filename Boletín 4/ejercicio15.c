#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3
#define RAND 20

void CrearArray(int (*array)[MAX]);
void PrintArray(int (*array)[MAX]);
void ArrayTranspuesto(int (*array)[MAX], int (*array_transpuesto)[MAX]);

int main() {
    int array[MAX][MAX];
    int array_transpuesto[MAX][MAX];

    srand(time(NULL));

    printf("------ ARRAY TRANSPUESTO -----");

    CrearArray(array);
    printf("\n\n--- ARRAY ORIGINAL ---");
    PrintArray(array);

    ArrayTranspuesto(array, array_transpuesto);
    printf("\n\n--- ARRAY TRANSPUESTO ---");
    PrintArray(array_transpuesto);

    return 0;
}

void CrearArray(int (*array)[MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            array[i][j] = rand() % RAND;
        }
    }
}

void PrintArray(int (*array)[MAX]) {
    for (int i = 0; i < MAX; i++) {
        printf("\n");
        for (int j = 0; j < MAX; j++) {
            printf("[%d]", array[i][j]);
        }
    }
}

void ArrayTranspuesto(int (*array)[MAX], int (*array_transpuesto)[MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            array_transpuesto[j][i] = array[i][j];
        }
    }
}