#include <stdio.h>

int main() {
    int vector11;
    int vector12;
    int vector13;
    int vector21;
    int vector22;
    int vector23;
    int escalar;

    //ENTRADA
    printf("Coordenadas cartesianas primer vector (separadas por espacios): \t");
    scanf("%d   %d  %d", &vector11, &vector12, &vector13);

    printf("Coordenadas cartesianas segundo vector (separadas por espacios): \t");
    scanf("%d   %d  %d", &vector21, &vector22, &vector23);

    //PROCESO
    escalar = (vector11*vector21) + (vector12*vector22) + (vector13*vector23);

    //SALIDA
    printf("Producto escalar: %d", escalar);

    return 0;
}
