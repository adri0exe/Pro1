#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 30

void CrearArray(int *array);
void JuntarArrays(int *array1, int *array2, int *arrays);
void OrdenarArray(int *array);
void PrintArray(int *array, int size);

int main() {
    int array1[MAX];
    int array2[MAX];
    int arrays[MAX+MAX];
    int size;

    srand(time(NULL));

    printf("------ ARRAYS ------");

    CrearArray(array1);
    CrearArray(array2);
    JuntarArrays(array1, array2, arrays);
    OrdenarArray(arrays);
    printf("\n");
    PrintArray(arrays, MAX+MAX);

    return 0;
}

void CrearArray(int *array) {
    for (int i = 0; i < MAX; i++) {
        array[i] = rand() % 100;
    }
}

void JuntarArrays(int *array1, int *array2, int *arrays) {
    for (int i = 0; i < MAX+MAX; i++) {
        if (i < MAX) {
            arrays[i] = array1[i];
        } else if (i >= MAX && i < MAX+MAX) {
            arrays[i] = array2[i - MAX];
        }
    }
}

void OrdenarArray(int *array) {
    for (int i = 0; i < MAX+MAX; i++) {
        for (int j = 0; j < MAX+MAX; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void PrintArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("[%d]", array[i]);
    }
}