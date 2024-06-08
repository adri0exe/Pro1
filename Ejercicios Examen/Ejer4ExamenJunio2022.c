#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 1000 //Numero demasiado grande de filas y columnas para que el programa lo procese

void CrearMatriz(int (*matriz)[M]);
void SumaDiagonal(int matriz[M][M]);

int main() {
    int matriz[M][M];

    srand(time(NULL));

    CrearMatriz(matriz);
    SumaDiagonal(matriz);

    return 0;
}

void CrearMatriz(int (*matriz)[M]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
}

void SumaDiagonal(int matriz[M][M]) {
    int suma = 0;

    for (int i = 0; i < M; i++) {
        suma = suma + matriz[i][i];
    }

    printf("\nLa suma de la diagonal es: %d", suma);
}