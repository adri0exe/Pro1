#include <stdio.h>

#define ALUMNOS 1
#define MAX 20

typedef struct {
    char nombre[MAX];
    float nota;
} asignatura;

void PedirDatos(asignatura *alumnos);
void PrintDatos(asignatura *alumnos);

int main() {
    asignatura alumnos[ALUMNOS];

    printf("------ NOTAS Y NOMBRE ALUMNOS ------");

    PedirDatos(alumnos);

    printf("\nALUMNO \t NOTA\n");
    PrintDatos(alumnos);

    return 0;
}

void PedirDatos(asignatura *alumnos) {
    for (int i = 0; i < ALUMNOS; i++) {
        printf("\nIntroduzca el nombre del alumno %d:" , i+1);
        fgets(alumnos[i].nombre, MAX, stdin);

        printf("\nIntroduce la nota del alumno %d: ", i+1);
        scanf("%f", &alumnos[i].nota);

        while (getchar() != '\n');
    }
}

void PrintDatos(asignatura *alumnos) {
    for (int i = 0; i < ALUMNOS; i++) {
        printf("\n[%s] = %.2f", alumnos[i].nombre, alumnos[i].nota);
    }
}