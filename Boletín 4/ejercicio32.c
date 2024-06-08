#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MATR 8
#define MAX 50

typedef struct {
    char matricula[MATR];
    int edad;
    char nombre[MAX];
} conductor;

void PedirDatos(conductor *datos1);
bool VerificarConductor(conductor datos1);

int main() {
    conductor datos1;

    printf("------ DATOS CONDUCTOR ------");

    PedirDatos(&datos1);

    if (VerificarConductor(datos1)) {
        printf("\nEl conductor es valido.\n");
    } else {
        printf("\nEl conductor no es valido.\n");
    }

    return 0;
}

void PedirDatos(conductor *datos1) {
    printf("\nIntroduce la matricula (XXXXAAA): ");
    fgets(datos1->matricula, MATR, stdin);

    printf("\nIntroduce la edad: ");
    scanf("%d", &datos1->edad);

    while (getchar() != '\n');

    printf("\nIntroduce el nombre completo: ");
    fgets(datos1->nombre, MAX, stdin);
}

bool VerificarConductor(conductor datos1) {
    // Verificar la longitud de la matrícula
    if (strlen(datos1.matricula) != 7) {
        return false;
    }

    // Calcular la suma de los números de la matrícula
    int suma_matricula = 0;
    for (int i = 0; i < 7; i++) {
        if (datos1.matricula[i] >= '0' && datos1.matricula[i] <= '9') {
            suma_matricula += datos1.matricula[i] - '0';
        }
    }

    // Verificar si la suma de los números de la matrícula es igual a la edad
    if (suma_matricula != datos1.edad) {
        return false;
    }

    // Obtener las iniciales del nombre y los apellidos
    char iniciales[3];
    iniciales[0] = datos1.nombre[0];
    int j = 1;

    for (int i = 0; i < strlen(datos1.nombre); i++) {
        if (datos1.nombre[i] == ' ') {
            iniciales[j] = datos1.nombre[i + 1];
            j++;
        }
    }
    iniciales[j] = '\0';

    // Verificar si las letras de la matrícula coinciden con las iniciales del nombre
    if (strncmp(datos1.matricula + 4, iniciales, 2) != 0) {
        return false;
    }

    // Si todas las condiciones se cumplen, devolver TRUE
    return true;
}