#include <stdio.h>

#define DIAS_SEMANA 7
#define SEMANAS 1
#define CONCEPTOS 3

struct gastosDiarios {
    int transporte;
    int alimentacion;
    int ocio;
};

const char *MenuDiasSemana(int dia);
void PedirDatosArray(struct gastosDiarios (*semana1)[SEMANAS], int *presupuesto_semanal);
//void PrintArray(struct gastosDiarios (*semana1)[CONCEPTOS]);
void GastosTotalSemana(struct gastosDiarios (*semana1)[SEMANAS]);
void GastoMedioDiario(struct gastosDiarios (*semana1)[SEMANAS]);

int main() {
    struct gastosDiarios semana1[DIAS_SEMANA][SEMANAS];
    int presupuesto_semanal;

    printf("\n------ PRESUPUESTO SEMANAL Y GASTOS DIARIOS ------");

    PedirDatosArray(semana1, &presupuesto_semanal);
    //PrintArray(semana1);
    GastosTotalSemana(semana1);
    GastoMedioDiario(semana1);

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
            return "Sabado";
        case 6:
            return "Domingo";
    }
}

void PedirDatosArray(struct gastosDiarios (*semana1)[SEMANAS], int *presupuesto_semanal) {
    printf("\nIntroduce su presupuesto semanal (euros): ");
    scanf("%d", &presupuesto_semanal);

    for (int i = 0; i < DIAS_SEMANA; i++) {
        printf("\n\n\n----- %s -----", MenuDiasSemana(i));
        for (int j = 0; j < SEMANAS; j++) {
            printf("\nIntroduce sus gastos en transporte: ");
            scanf("%d", &semana1[i][j].transporte);

            printf("\nIntroduce sus gastos en alimentacion: ");
            scanf("%d", &semana1[i][j].alimentacion);

            printf("\nIntroduce sus gastos en ocio: ");
            scanf("%d", &semana1[i][j].ocio);
        }
    }
}

/*
void PrintArray(struct gastosDiarios (*semana1)[CONCEPTOS]) {
    for (int i = 0; i < DIAS_SEMANA; i++) {
        for (int j = 0; j < CONCEPTOS; j++) {
            printf("[%d]", semana1[i][j].transporte);
            printf("[%d]", semana1[i][j].alimentacion);
            printf("[%d]", semana1[i][j].ocio);
            printf("\n");
        }
    }
}
*/

void GastosTotalSemana(struct gastosDiarios (*semana1)[SEMANAS]) {
    int suma = 0;

    for (int i = 0; i < DIAS_SEMANA; i++) {
        for (int j = 0; j < SEMANAS; j++) {
            suma = suma + semana1[i][j].transporte + semana1[i][j].alimentacion + semana1[i][j].ocio;
        }
    }
    printf("\nEl gasto total de la semana es: %d euros", suma);
}

void GastoMedioDiario(struct gastosDiarios (*semana1)[SEMANAS]) {
    int sumas[DIAS_SEMANA];
    int suma = 0;

    for (int i = 0; i < DIAS_SEMANA; i++) {
        for (int j = 0; j < SEMANAS; j++) {
            suma = suma + semana1[i][j].transporte + semana1[i][j].alimentacion + semana1[i][j].ocio;
        }
        sumas[i] = suma;
        suma = 0;
        printf("\n El gasto total del %s es: %d euros", MenuDiasSemana(i), sumas[i]);
    }
}