#include <stdio.h>

#define HORAS_DIA 24
#define DIAS_SEMANA 7

const char *MenuDiasSemana(int dia);
void PedirDatosArray(int (*array)[HORAS_DIA]);
void TemperaturaMediaDiaria(int (*array)[HORAS_DIA]);
void TemperaturaMediaSemanal(int (*array)[HORAS_DIA]);

int main() {
    int array [DIAS_SEMANA][HORAS_DIA];

    printf("\n------ TEMPERATURAS DE UNA SEMANA ------");

    PedirDatosArray(array);
    TemperaturaMediaDiaria(array);
    TemperaturaMediaSemanal(array);
    return 0;
}

const char *MenuDiasSemana(int dia) {
    switch (dia) {
        case 0:
            return "Lunes";
        case 1:
            return "Martes";
        case 2:
            return "Miercoles";
        case 3:
            return "Jueves";
        case 4:
            return "Viernes";
        case 5:
            return "Sebado";
        case 6:
            return "Domingo";

    }
}

void PedirDatosArray(int (*array)[HORAS_DIA]) {
    for (int i = 0; i < DIAS_SEMANA; i++) {
        printf("\n\n\n----- %s -----", MenuDiasSemana(i));
        for (int j = 0; j < HORAS_DIA; j++) {
            if (j == 0) {
                printf("\nTemperatura a la 0%d:00: ", j+1);
                scanf("%d", &array[i][j]);
            } else {
                printf("\nTemperatura a las 0%d:00: ", j+1);
                scanf("%d", &array[i][j]);
            }
        }
    }
}

void TemperaturaMediaDiaria(int (*array)[HORAS_DIA]) {
    int array_sumas[DIAS_SEMANA];
    int suma_dia = 0;

    for (int i = 0; i < DIAS_SEMANA; i++) {
        for (int j = 0; j < HORAS_DIA; j++) {
            suma_dia = suma_dia + array[i][j];
        }
        array_sumas[i] = suma_dia;
        suma_dia = 0;
    }

    for (int k = 0; k < DIAS_SEMANA; k++) {
        printf("\nLa media de temperatura del %s es: %d grados", MenuDiasSemana(k), array_sumas[k]/HORAS_DIA);
    }
}

void TemperaturaMediaSemanal(int (*array)[HORAS_DIA]) {
    int array_sumas[DIAS_SEMANA];
    int suma_dia = 0;

    for (int i = 0; i < DIAS_SEMANA; i++) {
        for (int j = 0; j < HORAS_DIA; j++) {
            suma_dia = suma_dia + array[i][j];
        }
        array_sumas[i] = suma_dia;
        suma_dia = 0;
    }

    int suma_media = 0;

    for (int k = 0; k < DIAS_SEMANA; k++) {
        suma_media = suma_media + array_sumas[k];
    }

    printf("\nLa media de temperatura semanal es: %d grados", suma_media/(DIAS_SEMANA*HORAS_DIA));
}