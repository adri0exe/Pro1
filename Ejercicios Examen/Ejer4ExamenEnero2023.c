#include <stdio.h>

#define MAXCHAR 50
#define MAX 1000

typedef struct {
    int numID;
    char descripcion[MAXCHAR];
    float kg;
} alimento;

void PedirDatos(alimento *datos);

int main() {
    float kilogramos = 0;
    int cantidad;

    printf("\nIntroduce la cantidad de alimentos: ");
    scanf("%d", &cantidad);

    alimento datos[cantidad];

    for (int i = 0; i < cantidad; i++) {
        PedirDatos(&datos[i]);
        kilogramos = kilogramos + datos[i].kg;
    }

    printf("\nTotal de kilogramos: %.2f kg", kilogramos);

    return 0;
}

void PedirDatos(alimento *datos) {
    printf("\nNumero ID: ");
    scanf("%d", &datos->numID);

    printf("\nDescripcion: ");
    scanf("%s", datos->descripcion);

    printf("\nCantidad en Kg: ");
    scanf("%f", &datos->kg);
}