#include <stdio.h>
#include <math.h>

#define MAX 10

void PedirDatosArray(int *array);
void PrintArrayOriginal(int *array);
void SustituirArray(int *array);
void PrintArrayFinal(int *array);

int main() {
    int *array[MAX];

    printf("------ ARRAY ------");

    PedirDatosArray(array);
    PrintArrayOriginal(array);

    SustituirArray(array);
    PrintArrayOriginal(array);

    return 0;
}

void PedirDatosArray(int *array) {
    int i;

    for (i = 0; i < MAX; i++) {
        printf("\nIntroduce el numero %d del array: ", i);
        scanf("%d", &array[i]);
    }
}

void PrintArrayOriginal(int *array) {
    printf("\n--- ARRAY ORIGINAL ---\n");

    for (int i = 0; i < MAX; i++) {
        printf("[%d]", array[i]);
    }
}

void SustituirArray(int *array) {
    for (int i = 0; i < MAX; i++) {
        if (array[i] % 2 == 0) {
            array[i] = array[i] * array[i];
        } else {
            array[i] = sqrt(array[i]);
        }
    }
}

void PrintArrayFinal(int *array) {
    printf("\n\n--- ARRAY FINAL ---\n");

    for (int i = 0; i < MAX; i++) {
        printf("[%d]", array[i]);
    }
}