#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

void CrearArray(int (*array)[MAX]);
void PrintArray(int (*array)[MAX]);
int PedirDatosI();
int PedirDatosJ();
void PuntoDeSilla(int (*array)[MAX]);

int main() {
    srand(time(NULL));
    int array[MAX][MAX];

    printf("------ PUNTO DE SILLA ARRAY ------");

    CrearArray(array);
    printf("\n\n--- ARRAY ---");
    PrintArray(array);
    PuntoDeSilla(array);

    return 0;
}

void CrearArray(int (*array)[MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            array[i][j] = rand() % 10;
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

int PedirDatosI() {
    int posicion_i;

    printf("\nIntroduce la posicion [i]: ");
    scanf("%d", &posicion_i);

    return posicion_i;
}

int PedirDatosJ() {
    int posicion_j;

    printf("\nIntroduce la posicion [j]: ");
    scanf("%d", &posicion_j);

    return posicion_j;
}

void PuntoDeSilla(int (*array)[MAX]) {
    int array_fila[MAX];
    int array_columna[MAX];
    int posicion_i = PedirDatosI();
    int posicion_j = PedirDatosJ();
    int num = array[posicion_i][posicion_j];
    int num_fila = num;
    int num_columna = num;

    for (int i = 0; i < MAX; i++) {
        array_fila[i] = array[posicion_i][i];
    }

    for (int j = 0; j < MAX; j++) {
        array_columna[j] = array[j][posicion_j];
    }

    for (int k = 0; k < MAX; k++) {
        if (array_fila[k] < num) {
            num_fila = array_fila[k];
        } else if (array_columna[k] > num) {
            num_columna = array_columna[k];
        }
    }

    if (num_fila == num && num_columna == num) {
        printf("\nEl numero %d tiene punto de silla", num);
    } else {
        printf("\nEl numero %d no tiene punto de silla", num);
    }
}