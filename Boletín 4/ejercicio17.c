#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

void CrearArray1(int (*array1)[MAX]);
void CrearArray2(int (*array2)[MAX]);
void PrintArray(int (*array)[MAX]);
void MenuOpciones(int (*array1)[MAX], int (*array2)[MAX]);
char PedirOpcion();
void SumaArray(int (*array1)[MAX], int (*array2)[MAX]);
void RestaArray(int (*array1)[MAX], int (*array2)[MAX]);
void ProductoArray(int (*array1)[MAX], int (*array2)[MAX]);

int main() {
    int array1[MAX][MAX];
    int array2[MAX][MAX];

    srand(time(NULL));

    printf("------ SUMA, RESTA, PRODUCTO DE ARRAYS ------");

    CrearArray1(array1);
    CrearArray2(array2);
    PrintArray(array1);
    PrintArray(array2);
    MenuOpciones(array1, array2);

    return 0;
}

void MenuOpciones(int (*array1)[MAX], int (*array2)[MAX]) {
    switch (PedirOpcion()) {
        case 's':
        case 'S':
            printf("\n\n\n--- SUMA ---");
            SumaArray(array1, array2);
            break;
        case 'r':
        case 'R':
            printf("\n\n\n--- RESTA ---");
            RestaArray(array1, array2);
            break;
        case 'p':
        case 'P':
            printf("\n\n\n--- PRODUCTO ---");
            ProductoArray(array1, array2);
            break;
        default:
            printf("\nERROR: Opcion no valida");
            break;
    }
}

char PedirOpcion() {
    char opcion;

    printf("\n\nS)uma");
    printf("\nR)esta");
    printf("\nP)roducto");
    printf("\nIntroduce la opcion que desee: ");
    scanf(" %c", &opcion);

    return opcion;
}

void CrearArray1(int (*array1)[MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            array1[i][j] = rand() % 10;
        }
    }
}

void CrearArray2(int (*array2)[MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            array2[i][j] = rand() % 10;
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
    printf("\n");
}

void SumaArray(int (*array1)[MAX], int (*array2)[MAX]) {
    int array_suma[MAX][MAX];

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            array_suma[i][j] = array1[i][j] + array2[i][j];
        }
    }
    PrintArray(array_suma);
}

void RestaArray(int (*array1)[MAX], int (*array2)[MAX]) {
    int array_resta[MAX][MAX];

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            array_resta[i][j] = array1[i][j] - array2[i][j];
        }
    }
    PrintArray(array_resta);
}

void ProductoArray(int (*array1)[MAX], int (*array2)[MAX]) {
    int array_producto[MAX][MAX];

    //INICIAR ARRAY CON CEROS
    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            array_producto[i][j] = 0;
        }
    }

    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            for (int k = 0; k < MAX; ++k) {
                array_producto[i][j] = array_producto[i][j] + array1[i][k] * array2[k][j];
            }
        }
    }
    PrintArray(array_producto);
}