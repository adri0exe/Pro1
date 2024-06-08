#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

void CrearArray(int (*array)[MAX]);
void PrintArray(int (*array)[MAX]);
void MayorMenorArray(int (*array)[MAX]);

int main() {
    int array[MAX][MAX];

    srand(time(NULL));

    printf("\n------ MATRIZ %dx%d ------", MAX, MAX);

    CrearArray(array);
    PrintArray(array);
    MayorMenorArray(array);

    return 0;
}

void CrearArray(int (*array)[MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            array[i][j] = rand() % 20;
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

void MayorMenorArray(int (*array)[MAX]) {
    int max = 0, min = array[0][0];
    int posicionI_max, posicionJ_max;
    int posicionI_min, posicionJ_min;

    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
                posicionI_max = i + 1;
                posicionJ_max = j + 1;
            } else if (array[i][j] < min) {
                min = array[i][j];
                posicionI_min = i + 1;
                posicionJ_min = j + 1;
            }
        }

    printf("\nEl mayor numero es el %d en la posicion [%d][%d]", max, posicionI_max, posicionJ_max);
    printf("\nEl menor numero es el %d en la posicion [%d][%d]", min, posicionI_min, posicionJ_min);
}