#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

void CrearArray(int (*array)[MAX]);
void PrintArray(int (*array)[MAX]);
void MenuIntercambiar(int (*array)[MAX], int (*copia_array)[MAX]);
void IntercambiarColumna(int (*array)[MAX], int (*copia_array)[MAX]);
void IntercambiarFilas(int (*array)[MAX], int (*copia_array)[MAX]);

int main() {
    int array[MAX][MAX];
    int copia_array[MAX][MAX];

    srand(time(NULL));

    printf("------ INTERCAMBIAR FILAS O COLUMNAS MATRIZ %dx%d------\n", MAX, MAX);

    CrearArray(array);
    PrintArray(array);
    MenuIntercambiar(array, copia_array);

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

void MenuIntercambiar(int (*array)[MAX], int (*copia_array)[MAX]) {
    int opcion;

    printf("\n\nIntercambiar:");
    printf("\n(1) FILA");
    printf("\n(2) COLUMNA\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            IntercambiarFilas(array, copia_array);
            printf("\n\n\n--- ARRAY FILAS INTERCAMBIADAS ---\n");
            PrintArray(array);
            break;
        case 2:
            IntercambiarColumna(array, copia_array);
            printf("\n\n\n--- ARRAY COLUMNAS INTERCAMBIADAS ---\n");
            PrintArray(array);
            break;
        default:
            printf("ERROR: Numero incorrecto");
            break;
    }
}

void IntercambiarColumna(int (*array)[MAX], int (*copia_array)[MAX]) {
    int num1, num2;

    for (int k = 0; k < MAX; k++) {
        for (int l = 0; l < MAX; l++) {
            copia_array[k][l] = array[k][l];
        }
    }

    printf("\nIntroduce el numero de columna que quieras intercambiar [1 - %d]: ", MAX);
    scanf("%d", &num1);

    printf("\nIntroduce el numero de la columna por la que quieras intercambiar [1 - %d]: ", MAX);
    scanf("%d", &num2);

    num1 = num1 - 1;
    num2 = num2 - 1;

    for (int i = 0; i < MAX; i++) {
        array[i][num1] = array[i][num2];
        array[i][num2] = copia_array[i][num1];
    }
}

void IntercambiarFilas(int (*array)[MAX], int (*copia_array)[MAX]) {
    int num1, num2;

    for (int k = 0; k < MAX; k++) {
        for (int l = 0; l < MAX; l++) {
            copia_array[k][l] = array[k][l];
        }
    }

    printf("Introduce el numero de fila que quieras intercambiar [1 - %d]: ", MAX);
    scanf("%d", &num1);

    printf("Introduce el numero de la fila por la que quieras intercambiar [1 - %d]: ", MAX);
    scanf("%d", &num2);

    num1 = num1 - 1;
    num2 = num2 - 1;

    for (int j = 0; j < MAX; j++) {
        array[num1][j] = array[num2][j];
        array[num2][j] = copia_array[num1][j];
    }
}