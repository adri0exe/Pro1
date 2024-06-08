#include <stdio.h>

#define MAX 3

void PedirDatosArray(int (*array)[MAX]);
void PrintArray(int (*array)[MAX]);
int SumaFilasArray(int (*array)[MAX]);
int SumaColumnasArray(int (*array)[MAX]);
int SumaDiagonalArray(int (*array)[MAX]);
void EsCuadradoMagico(int (*array)[MAX]);

int main() {
    int array[MAX][MAX];

    printf("------- CUADRADO MAGICO -------");

    PedirDatosArray(array);
    PrintArray(array);
    EsCuadradoMagico(array);

    return 0;
}

void PedirDatosArray(int (*array)[MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            printf("\nIntroduce la posicion [%d][%d] del cuadrado: ", i + 1, j+1);
            scanf("%d", &array[i][j]);
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

int SumaFilasArray(int (*array)[MAX]) {
    int suma_filas[MAX];
    int suma_fila = 0;

    for (int i = 0; i < MAX; i++) {
        suma_filas[i] = 0;
        for (int j = 0; j < MAX; j++) {
            suma_filas[i] = suma_filas[i] + array[i][j];
        }
    }

    for (int k = 0; k < MAX; k++) {

        if (suma_filas[k] == suma_filas[0]) {
            suma_fila++;
        }
    }

    if (suma_fila == MAX) {
        return suma_filas[0];
    } else {
        return 0;
    }
}

int SumaColumnasArray(int (*array)[MAX]) {
    int suma_columnas[MAX];
    int suma_columna = 0;

    for (int i = 0; i < MAX; i++) {
        suma_columnas[i] = 0;
        for (int j = 0; j < MAX; j++) {
            suma_columnas[i] = suma_columnas[i] + array[j][i];
        }
    }

    for (int k = 0; k < MAX; k++) {

        if (suma_columnas[k] == suma_columnas[0]) {
            suma_columna++;
        }
    }

    if (suma_columna == MAX) {
        return suma_columnas[0];
    } else {
        return 0;
    }
}

int SumaDiagonalArray(int (*array)[MAX]) {
    int diagonal[MAX];
    int suma_diagonal = 0;

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (i == j) {
                diagonal[i] = array[i][j];
            }
        }
    }

    for (int k = 0; k < MAX; k++) {
        suma_diagonal = suma_diagonal + diagonal[k];
    }

    return suma_diagonal;
}

void EsCuadradoMagico(int (*array)[MAX]) {
    int total = 0;

    printf("Filas %d Columnsa %d Diagonal %d", SumaFilasArray(array), SumaColumnasArray(array), SumaDiagonalArray(array));

    if (SumaColumnasArray(array) == SumaDiagonalArray(array)) {
        total++;
    } if (SumaFilasArray(array) == SumaColumnasArray(array)) {
        total++;
    } if (SumaDiagonalArray(array) == SumaFilasArray(array)) {
        total++;
    }

    if (total == MAX) {
        printf("\nEs cuadrado magico");
    } else {
        printf("\nNo es cuadrado magico");
    }
}