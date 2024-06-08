#include <stdio.h>

#define MAX 30

void PedirDatosArray(int *array);
void SumaArray(int *array);

int main() {
    int array[MAX];

    printf("\n------ SUMA DE ELEMENTOS DE UN ARRAY ------");

    PedirDatosArray(array);
    SumaArray(array);

    return 0;
}

void PedirDatosArray(int *array) {
    for (int i = 0; i < MAX; i++) {
        printf("\nPosicion %d: ", i+1);
        scanf("%d", &array[i]);
    }
}

void SumaArray(int *array) {
    int suma = 0;

    for (int i = 0; i < MAX; i++) {
        suma = suma + array[i];
    }

    printf("\nSuma = %d", suma);
}