#include <stdio.h>
#include <stdbool.h>

#define CHAR 200
#define MES 12
#define DIAS 31
#define TAREAS 20

typedef struct {
    int fecha_dia;
    int fecha_mes;
    int hora;
    int minuto;
    char descripcion[CHAR];
} tarea;

int PedirDatosMenu();
void CrearLista(tarea (*lista1)[DIAS][TAREAS]);
void MenuGestionado(tarea (*lista1)[DIAS][TAREAS]);
void AnadirTarea(tarea (*lista1)[DIAS][TAREAS]);
void VerTareas(tarea (*lista1)[DIAS][TAREAS]);
void BorrarTarea(tarea (*lista1)[DIAS][TAREAS]);
void ReiniciarTabla(tarea (*lista1)[DIAS][TAREAS]);

int main() {
    tarea lista1[MES][DIAS][TAREAS];

    printf("------ TAREAS ------");

    MenuGestionado(lista1);

    return 0;
}

int PedirDatosMenu() {
    int opcion;

    printf("\n\n1) Anadir tarea \t2) Ver tareas \t3) Borrar Tarea \t4)Reiniciar Tabla \t5) Salir");
    printf("\nIntroduce la opcion deseada: ");
    scanf("%d", &opcion);

    return opcion;
}

void MenuGestionado(tarea (*lista1)[DIAS][TAREAS]) {
    bool continuar = true;

    CrearLista(lista1);

    do {
        switch (PedirDatosMenu()) {
            case 1:
                AnadirTarea(lista1);
                continuar = true;
                break;
            case 2:
                VerTareas(lista1);
                continuar = true;
                break;
            case 3:
                BorrarTarea(lista1);
                continuar = true;
                break;
            case 4:
                ReiniciarTabla(lista1);
                continuar = true;
                break;
            case 5:
                printf("\nCERRANDO PROGRAMA...");
                continuar = false;
                break;
            default:
                printf("\nERROR: Opcion no valida");
                continuar = true;
                break;
        }
    } while (continuar);
}

void CrearLista(tarea (*lista1)[DIAS][TAREAS]) {
    for (int i = 0; i < MES; i++) {
        for (int j = 0; j < DIAS; j++) {
            for (int k = 0; k < TAREAS; k++) {
                lista1[i][j][k].fecha_dia = j + 1;
                lista1[i][j][k].fecha_mes = i + 1;
                lista1[i][j][k].hora = 0;
                lista1[i][j][k].minuto = 0;

                lista1[i][j][k].descripcion[0] = '\0';
            }
        }
    }
}

void AnadirTarea(tarea (*lista1)[DIAS][TAREAS]) {
    int dia, mes, hora, minuto;
    char descripcion;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n--- Introduce los siguientes datos ---");
    printf("\nDia: ");
    scanf("%d", &dia);
    printf("\nMes: ");
    scanf("%d", &mes);
    printf("\nHora: ");
    scanf("%d", &hora);
    printf("\nMinuto: ");
    scanf("%d", &minuto);

    if (dia >= 1 && dia <= DIAS && mes >= 1 && mes <= MES && hora >= 0 && hora <= 23 && minuto >= 0 && minuto <= 59) {
        // Buscar una tarea vacía para almacenar la nueva tarea
        int tareaLibre = -1;

        for (int k = 0; k < TAREAS; k++) {
            if (lista1[mes - 1][dia - 1][k].hora == 0 && lista1[mes - 1][dia - 1][k].minuto == 0) {
                tareaLibre = k;
                break;
            }
        }

        // Verificar si hay espacio para la nueva tarea
        if (tareaLibre != -1) {
            printf("\nDescripcion: ");
            scanf(" %[^\n]s", lista1[mes - 1][dia - 1][tareaLibre].descripcion); // Leer la descripción // Leer la descripción

            // Almacenar la fecha, hora y minuto en la tarea correspondiente
            lista1[mes - 1][dia - 1][tareaLibre].fecha_dia = dia;
            lista1[mes - 1][dia - 1][tareaLibre].fecha_mes = mes;
            lista1[mes - 1][dia - 1][tareaLibre].hora = hora;
            lista1[mes - 1][dia - 1][tareaLibre].minuto = minuto;

            printf("\nTarea anadida con exito.\n");
        } else {
            printf("\nERROR: No hay espacio para mas tareas en esta fecha.\n");
        }
    } else {
        printf("\nERROR: Fecha u hora no valida.\n");
    }

}

void VerTareas(tarea (*lista1)[DIAS][TAREAS]) {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n------ TAREAS ACTUALES ------\n");

    for (int i = 0; i < MES; i++) {
        for (int j = 0; j < DIAS; j++) {
            for (int k = 0; k < TAREAS; k++) {
                if (lista1[i][j][k].hora != 0 || lista1[i][j][k].minuto != 0) {
                    printf("\nFecha: %d/%d", lista1[i][j][k].fecha_dia, lista1[i][j][k].fecha_mes);
                    printf("\nHora: %02d:%02d", lista1[i][j][k].hora, lista1[i][j][k].minuto);
                    printf("\nDescripcion: %s\n", lista1[i][j][k].descripcion);
                    printf("-----------------------------");
                }
            }
        }
    }

    printf("\nFin de la lista de tareas.\n");
}

void BorrarTarea(tarea (*lista1)[DIAS][TAREAS]) {
    int dia, mes;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n--- Borrar Tarea: Introduce los siguientes datos ---\n");
    printf("\nDia: ");
    scanf("%d", &dia);
    printf("\nMes: ");
    scanf("%d", &mes);

    for (int i = 0; i < MES; i++) {
        for (int j = 0; j < DIAS; j++) {
            for (int k = 0; k < TAREAS; k++) {
                if (lista1[i][j][k].fecha_dia == dia && lista1[i][j][k].fecha_mes == mes) {

                    lista1[i][j][k].hora = 0;
                    lista1[i][j][k].minuto = 0;
                    lista1[i][j][k].descripcion[0] = '\0';
                }
            }
        }
    }

    printf("\nTarea borrada con exito");
}

void ReiniciarTabla(tarea (*lista1)[DIAS][TAREAS]) {
    for (int i = 0; i < MES; i++) {
        for (int j = 0; j < DIAS; j++) {
            for (int k = 0; k < TAREAS; k++) {
                lista1[i][j][k].hora = 0;
                lista1[i][j][k].minuto = 0;
                lista1[i][j][k].descripcion[0] = '\0';
            }
        }
    }
}