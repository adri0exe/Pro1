#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#if defined(_WIN32) || defined(_WIN64)
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

#define FILAS 20
#define COLUMNAS 40
#define GENERACIONES 500

void inicializarTablero(int tablero[FILAS][COLUMNAS]);
void imprimirTablero(int tablero[FILAS][COLUMNAS]);
int contarVecinos(int tablero[FILAS][COLUMNAS], int fila, int columna);
void actualizarTablero(int tablero[FILAS][COLUMNAS]);

int main() {
    int tablero[FILAS][COLUMNAS];
    inicializarTablero(tablero);

    for (int generacion = 0; generacion < GENERACIONES; generacion++) {
        printf("\nGeneracion %d", generacion);
        imprimirTablero(tablero);
        actualizarTablero(tablero);
    }

    return 0;
}

void inicializarTablero(int tablero[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            tablero[i][j] = rand() % 2; // 0 o 1 aleatorio
        }
    }
}

void imprimirTablero(int tablero[FILAS][COLUMNAS]) {
    system(CLEAR_SCREEN);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (tablero[i][j] == 1) {
                printf("* ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    usleep(100000); // Espera 100,000 microsegundos (0.1 segundos)
}

int contarVecinos(int tablero[FILAS][COLUMNAS], int fila, int columna) {
    int vecinos = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int vecinoFila = (fila + i + FILAS) % FILAS;
            int vecinoColumna = (columna + j + COLUMNAS) % COLUMNAS;
            vecinos += tablero[vecinoFila][vecinoColumna];
        }
    }
    vecinos -= tablero[fila][columna]; // Resta el propio estado actual
    return vecinos;
}

void actualizarTablero(int tablero[FILAS][COLUMNAS]) {
    int nuevoTablero[FILAS][COLUMNAS];
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            int vecinos = contarVecinos(tablero, i, j);
            if (tablero[i][j] == 1) {
                // Célula viva
                if (vecinos < 2 || vecinos > 3) {
                    nuevoTablero[i][j] = 0; // Muere por baja población o sobrepoblación
                } else {
                    nuevoTablero[i][j] = 1; // Sobrevive
                }
            } else {
                // Célula muerta
                if (vecinos == 3) {
                    nuevoTablero[i][j] = 1; // Nace debido a la reproducción
                } else {
                    nuevoTablero[i][j] = 0; // Permanece muerta
                }
            }
        }
    }
    // Copiar el nuevo tablero al original
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            tablero[i][j] = nuevoTablero[i][j];
        }
    }
}