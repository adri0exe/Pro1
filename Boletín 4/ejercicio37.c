#include <stdio.h>
#include <stdlib.h>

int esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void imprimirAniosBisiestos(int year) {
    int count = 0;

    printf("\nLos próximos 100 años bisiestos a partir de %d son:\n", year);

    while (count < 100) {
        if (esBisiesto(year)) {
            printf("%d\n", year);
            count++;
        }
        year++;
    }
}

void obtenerFecha(int *dia, int *mes, int *anio) {
    char fecha[12];
    int result;

    do {
        printf("\nIngrese una fecha en formato dd/mm/aaaa: ");
        if (fgets(fecha, sizeof(fecha), stdin) == NULL) {
            exit(EXIT_FAILURE);
        }

        result = sscanf(fecha, "%2d/%2d/%4d", dia, mes, anio);
        if (result != 3 || *dia < 1 || *dia > 31 || *mes < 1 || *mes > 12 || *anio < 1) {
            printf("\nFormato de fecha incorrecto. Inténtelo de nuevo.\n");
        }
    } while (result != 3 || *dia < 1 || *dia > 31 || *mes < 1 || *mes > 12 || *anio < 1);
}

int main() {
    int dia, mes, anio;

    obtenerFecha(&dia, &mes, &anio);

    imprimirAniosBisiestos(anio);

    char respuesta;
    do {
        printf("\nDesea cambiar la fecha (S/N): ");
        scanf(" %c", &respuesta);

        if (respuesta == 'S' || respuesta == 's') {
            obtenerFecha(&dia, &mes, &anio);
            imprimirAniosBisiestos(anio);
        }
    } while (respuesta == 'S' || respuesta == 's');

    printf("\nHasta luego\n");

    return 0;
}
