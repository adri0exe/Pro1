#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 500

void CrearArray(int *array);
void PrintArray(int *array, int size);
void JuntarArrays(int *array1, int *array2, int *array3, int *arrays);
void OrdenarBurbuja(int *array, int size);

int main() {
    int array1[MAX], array2[MAX], array3[MAX];
    int arrays[MAX+MAX+MAX];

    srand(time(NULL));

    printf("------ ORDENAR 3 ARRAYS ------");

    CrearArray(array1);
    CrearArray(array2);
    CrearArray(array3);

    printf("\n\n--- ARRAYS JUSTOS DESORDENADOS ---\n");

    JuntarArrays(array1, array2, array3, arrays);
    PrintArray(arrays, MAX+MAX+MAX);

    printf("\n\n--- ARRAYS ORDENDAOS ---\n");

    OrdenarBurbuja(arrays, MAX+MAX+MAX);
    PrintArray(arrays, MAX+MAX+MAX);

    return 0;
}

void CrearArray(int *array) {
    for (int i = 0;i < MAX; i++) {
        array[i] = rand() % 10000;
    }
}

void PrintArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("[%d]", array[i]);
    }
}

void JuntarArrays(int *array1, int *array2, int *array3, int *arrays) {
    for (int i = 0; i < MAX+MAX+MAX; i++) {
        if (i < MAX) {
            arrays[i] = array1[i];
        } else if (MAX <= i && i < MAX + MAX) {
            arrays[i] = array2[i - MAX];
        } else if (MAX + MAX <= i && i < MAX + MAX + MAX) {
            arrays[i] = array3[i - MAX - MAX];
        }
    }
}

void OrdenarBurbuja(int *array, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}