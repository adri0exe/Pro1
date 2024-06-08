#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define EMPLEADOS 1
#define MAX 50

typedef struct {
    char nombre [MAX];
    int dia_nacimiento;
    int mes_nacimiento;
    int ano_nacimiento;
    char puesto [MAX];
    char estudios [MAX];
    long int telefono;
    long int matricula;
    long int codigo;
} empleado;

void PedirDatos(empleado *trabajadores);
void PrintDatos(empleado *trabajadores);
int NumEmpleado();

int main() {
    empleado trabajadores[EMPLEADOS];

    printf("\n------ EMPLEADOS ------");

    PedirDatos(trabajadores);
    PrintDatos(trabajadores);

    return 0;
}

void PedirDatos(empleado *trabajadores) {
    printf("\n\nIntroduce los datos:");

    for (int i = 0; i < EMPLEADOS; i++) {
        printf("\nEMPLEADO %d", i);
        printf("\nNombre: ");
        scanf("%s", &trabajadores[i].nombre);

        printf("\nFecha de nacimiento (dd/mm/aaaa): ");
        scanf("%d %d %d", &trabajadores[i].dia_nacimiento, &trabajadores[i].mes_nacimiento, &trabajadores[i].ano_nacimiento);

        printf("\nPuesto de trabajo: ");
        scanf("%s", &trabajadores[i].puesto);

        printf("\nEstudios: ");
        scanf("%s", &trabajadores[i].estudios);

        if (strcmp(trabajadores[i].puesto, "oficinista") == 0) {
            printf("\nNumero de telefono: ");
            scanf("%lu", &trabajadores[i].telefono);
        } else if (strcmp(trabajadores[i].puesto, "conductor") == 0) {
            printf("\nMatricula de coche: ");
            scanf("%lu", &trabajadores[i].matricula);
        } else if (strcmp(trabajadores[i].puesto, "tecnico") == 0) {
            printf("\nCodigo de barras: ");
            scanf("%lu", &trabajadores[i].codigo);
        }
    }
}

int NumEmpleado() {
    int num;
    bool continuar = true;

    printf("\nIntroduce el numero de empleado que quieras ver: ");
    scanf("%d", &num);

    if (num >= 0 && num < EMPLEADOS) {
        return num;
    } else {
        printf("ERROR: Numero no valido");
    }
         exit(-1);

    return num;
}

void PrintDatos(empleado *trabajadores) {
    int num = NumEmpleado();

    printf("\n\n\n\n\n\n--- EMPLEADO %d ---", num);
    printf("\nNombre: %s", trabajadores[num].nombre);
    printf("\nFecha de nacimiento: %02d/%02d/%d", trabajadores[num].dia_nacimiento, trabajadores[num].mes_nacimiento, trabajadores[num].ano_nacimiento);
    printf("\nPuesto: %s", trabajadores[num].puesto);
    printf("\nEstudios: %s", trabajadores[num].estudios);

    if (strcmp(trabajadores[num].puesto, "oficinista") == 0) {
        printf("\nNumero de telefono: %lu", trabajadores[num].telefono);
    } else if (strcmp(trabajadores[num].puesto, "conductor") == 0) {
        printf("\nMatricula de coche: %lu", trabajadores[num].matricula);
    } else if (strcmp(trabajadores[num].puesto, "tecnico") == 0) {
        printf("\nCodigo de barras: %lu", trabajadores[num].codigo);
    }
}