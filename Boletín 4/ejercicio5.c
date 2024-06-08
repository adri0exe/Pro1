#include <stdio.h>

#define HORAS_DIA 5

void PedirDatosArray(int *array);
void PrintArray(int *array);
void MediaTemperatura(int *array);
void MaxMinTemperatura(int *array);

int main() {
    int array[HORAS_DIA];

    printf("\n------ TEMPERATURA DEL DIA ------");

    PedirDatosArray(array);
    PrintArray(array);
    MediaTemperatura(array);
    MaxMinTemperatura(array);

    return 0;
}

void PedirDatosArray(int *array) {
    for (int i = 0; i < HORAS_DIA; i++) {
        if (i == 0) {
            printf("\nTemperatura a la 0%d:00: ", i+1);
            scanf("%d", &array[i]);
        } else {
            printf("\nTemperatura a las 0%d:00: ", i+1);
            scanf("%d", &array[i]);
        }
    }
}

void PrintArray(int *array) {
    for (int i = 0; i < HORAS_DIA; i++) {
        printf("\n0%d:00 = %d grados", i+1, array[i]);
    }
}

void MediaTemperatura(int *array) {
    int suma = 0;

    for (int i = 0; i < HORAS_DIA; i++) {
        suma = suma + array[i];
    }
    float media = suma / HORAS_DIA;

    printf("\nLa media de temperatura es: %.2f grados", media);
}

void MaxMinTemperatura(int *array) {
    int numMax = 0;
    int numMin = array[0];

    for (int i = 0; i < HORAS_DIA; i++) {
        if (array[i] > numMax) {
            numMax = array[i];
        } else if (array[i] < numMin) {
            numMin = array[i];
        }
    }

    printf("\nLa temeperatura maxima es %d grados y la minima es %d grados", numMax, numMin);
}