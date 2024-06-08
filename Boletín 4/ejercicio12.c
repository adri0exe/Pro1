#include <stdio.h>

#define MAX 5

void PedirDatosArray(int *array);
void PrintArray(int *array);
void CrearArrayReves(int *array, int *array_reves);
void PrintArrayReves(int *array_reves);
void EsCapicua(int *array, int *array_reves);

int main() {
    int array[MAX];
    int array_reves[MAX];

    printf("------ ARRAY CAPICUA ------");

    PedirDatosArray(array);
    PrintArray(array);
    CrearArrayReves(array, array_reves);
    PrintArrayReves(array_reves);
    EsCapicua(array, array_reves);

    return 0;
}

void PedirDatosArray(int *array) {
    for (int i = 0; i < MAX; i++) {
        printf("\nPosicion %d del array: ", i);
        scanf("%d", &array[i]);
    }
}

void PrintArray(int *array) {
    printf("\n\n\n --- ARRAY --- \n");

    for (int i = 0; i < MAX; i++) {
        printf("[%d]", array[i]);
    }
}

void CrearArrayReves(int *array, int *array_reves) {
    for (int i = 0, j = MAX-1; i < MAX; i++, j--) {
        array_reves[i] = array[j];
    }
}

void PrintArrayReves(int *array_reves) {
    printf("\n\n\n--- ARRAY REVES ---\n");

    for (int i = 0; i < MAX; i++) {
        printf("[%d]",array_reves[i]);
    }
}

void EsCapicua(int *array, int *array_reves) {
    int suma = 0;

    for (int i = 0; i < MAX; i++) {
        if (array[i] == array_reves[i]) {
            suma++;
        }
    }

    if (suma == MAX) {
        printf("\n\n\nEs capicua");
    } else {
        printf("\n\n\nNo es capicua");
    }
}