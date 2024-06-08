#include <stdio.h>

#define DIAS_SEMANA 7

void PedirDatosArray(int *array);
void MediaHoras(int *array);
const char *DiasSemana(int dia);
void MayorMenorNum(int *array);

int main() {
    int array[DIAS_SEMANA];
    printf("\n------ HORAS DE ESTUDIO DE UN ALUMNO ------");

    PedirDatosArray(array);
    MediaHoras(array);
    MayorMenorNum(array);

    return 0;
}

const char *DiasSemana(int dia) {
    switch (dia) {
        case 1:
            return "Lunes";
            break;
        case 2:
            return "Martes";
            break;
        case 3:
            return "Miercoles";
            break;
        case 4:
            return "Jueves";
            break;
        case 5:
            return "Viernes";
            break;
        case 6:
            return "Sabado";
            break;
        case 7:
            return "Domingo";
            break;

    }
}

void PedirDatosArray(int *array) {
    for (int i = 0; i < DIAS_SEMANA; i++) {
        printf("\nHoras del %s: ", DiasSemana(i+1));
        scanf("%d", &array[i]);
    }
}

void MediaHoras(int *array) {
    int suma = 0;

    for (int i = 0; i < DIAS_SEMANA; i++) {
        suma = suma + array[i];
    }

    int media = suma / DIAS_SEMANA;

    printf("\nLa media de horas es = %d", media);
}

void MayorMenorNum(int *array) {
    int num_mayor = 0;
    int num_menor = array[0];
    int menor_dia, mayor_dia;

    for (int i = 0; i < DIAS_SEMANA; i++) {
        if (array[i] > num_mayor) {
            num_mayor = array[i];
            mayor_dia = i+1;
        } else if (array[i] < num_menor) {
            num_menor = array[i];
            menor_dia = i+1;
        }
    }

    printf("\nEl dia que mas ha estudiado han sido %d horas y ha sido el %s", num_mayor, DiasSemana(mayor_dia));
    printf("\nEl dia que menos ha estudiado han sido %d horas y ha sido el %s", num_menor, DiasSemana(menor_dia));
}