/*
 * Defina en lenguaje C una función que reciba una matriz de 3 x 4 elementos de tipo float y
 * devuelva un valor con la media aritmética de todos los elementos de la matriz.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float MediaAritmeticaMatriz(float matriz[3][4]);
void CrearMatriz(float (*matriz)[4]);

int main() {
    float matriz[3][4];

    srand(time(NULL));

    CrearMatriz(matriz);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("[%.2f]", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nLa media aritmetica es: %.2f", MediaAritmeticaMatriz(matriz));

    return 0;
}

void CrearMatriz(float (*matriz)[4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10;
        }
    }
}

float MediaAritmeticaMatriz(float matriz[3][4]) {
    float suma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            suma = suma + matriz[i][j];
        }
    }

    return suma/12;
}