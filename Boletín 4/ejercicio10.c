#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 10

void CrearArray1(int *array1);
void PrintArray1(int *array1);
void OrdenarArray1(int *array1);
void PrintArrayOrdenado1(int *array1);

void CrearArray2(int *array2);
void PrintArray2(int *array2);
void OrdenarArray2(int *array2);
void PrintArrayOrdenado2(int *array2);

void ConcatenarArrays(int *array1, int *array2, int *array_concatenado);
void OrdenarArrayConcatenado(int *array_concatenado);
void PrintArrayConcatenado(int *array_concatenado);
void PrintArrayConcatenadoOrdenado(int *array_concatenado);

int main() {
    int array1[MAX];
    int array2[MAX];
    int array_concatenado[MAX+MAX];

    srand(time(NULL));
    printf("------ ARRAY ORDENADO ------");

    CrearArray1(array1);
    PrintArray1(array1);
    OrdenarArray1(array1);
    PrintArrayOrdenado1(array1);

    CrearArray2(array2);
    PrintArray2(array2);
    OrdenarArray2(array2);
    PrintArrayOrdenado2(array2);

    ConcatenarArrays(array1, array2, array_concatenado);
    PrintArrayConcatenado(array_concatenado);
    OrdenarArrayConcatenado(array_concatenado);
    PrintArrayConcatenadoOrdenado(array_concatenado);

    return 0;
}

void CrearArray1(int *array1) {
    for (int i = 0; i < MAX; i++) {
        array1[i] = rand() % 100;
    }
}

void PrintArray1(int *array1) {
    printf("\n\n\n--- PRINT ARRAY 1 DESORDENADO ---\n");

    for (int i = 0; i < MAX; i++) {
        printf("[%d]", array1[i]);
    }
}

void OrdenarArray1(int *array1) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            if (array1[j] > array1[j + 1]) {
                int temp = array1[j];
                array1[j] = array1[j + 1];
                array1[j + 1] = temp;
            }
        }
    }
}

void PrintArrayOrdenado1(int *array1) {
    printf("\n\n--- PRINT ARRAY 1 ORDENADO ---\n");

    for (int i = 0; i < MAX; i++) {
        printf("[%d]", array1[i]);
    }
}

void CrearArray2(int *array2) {
    for (int i = 0; i < MAX; i++) {
        array2[i] = rand() % 100;
    }
}

void PrintArray2(int *array2) {
    printf("\n\n\n--- PRINT ARRAY 2 DESORDENADO ---\n");

    for (int i = 0; i < MAX; i++) {
        printf("[%d]", array2[i]);
    }
}

void OrdenarArray2(int *array2) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            if (array2[j] > array2[j + 1]) {
                int temp = array2[j];
                array2[j] = array2[j + 1];
                array2[j + 1] = temp;
            }
        }
    }
}

void PrintArrayOrdenado2(int *array2) {
    printf("\n\n--- PRINT ARRAY 2 ORDENADO ---\n");

    for (int i = 0; i < MAX; i++) {
        printf("[%d]", array2[i]);
    }
}

void ConcatenarArrays(int *array1, int *array2, int *array_concatenado) {
    for (int i = 0; i < MAX+MAX; i++) {
        if (i < MAX) {
            array_concatenado[i] = array1[i];
        } else {
            array_concatenado[i] = array2[i-MAX];
        }
    }
}

void PrintArrayConcatenado(int *array_concatenado) {
    printf("\n\n\n--- PRINT ARRAYS CONCATENADO ---\n");

    for (int i = 0; i < MAX+MAX; i++) {
        printf("[%d]", array_concatenado[i]);
    }
}

void OrdenarArrayConcatenado(int *array_concatenado) {
    for (int i = 0; i < MAX+MAX - 1; i++) {
        for (int j = 0; j < MAX+MAX - i - 1; j++) {
            if (array_concatenado[j] > array_concatenado[j + 1]) {
                int temp = array_concatenado[j];
                array_concatenado[j] = array_concatenado[j + 1];
                array_concatenado[j + 1] = temp;
            }
        }
    }
}

void PrintArrayConcatenadoOrdenado(int *array_concatenado) {
    printf("\n\n--- PRINT ARRAYS CONCATENADOS ORDENADOS ---\n");
    for (int i = 0; i < MAX+MAX; i++) {
        printf("[%d]", array_concatenado[i]);
    }
}