#include <stdio.h>

int main() {
    int mes;
    int ano;

    printf("Introduzca el numero del mes: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            printf("El mes de Enero tiene 31 dias");
            break;
        case 2:
            printf("Introduzca el año:");
            scanf("%d", ano);
            if (ano%4 == 0) {
                printf("El mes de Febrero tiene 29 dias");
            } else printf("El mes de Febrero tiene 28 dias");

            break;
        case 3:
            printf("El mes de Marzo tiene 31 dias");
            break;
        case 4:
            printf("El mes de Abril tiene 30 dias");
            break;
        case 5:
            printf("El mes de Mayo tiene 31 dias");
            break;
        case 6:
            printf("El mes de Junio tiene 30 dias");
            break;
        case 7:
            printf("El mes de Julio tiene 31 dias");
            break;
        case 8:
            printf("El mes de Agosto tiene 31 dias");
            break;
        case 9:
            printf("El mes de Septiembre tiene 30 dias");
            break;
        case 10:
            printf("El mes de Octubre tiene 31 dias");
            break;
        case 11:
            printf("El mes de Noviembre tiene 30 dias");
            break;
        case 12:
            printf("El mes de Diciembre tiene 31 dias");
            break;
    }

    return 0;
}
