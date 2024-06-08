#include <stdio.h>
#include <stdlib.h>
/*
 * Numero de dias transcurridos desde el comienzo de año hasta la fecha indicada por el usuario
 */

int main() {
    int dia, mes, suma_dias_mes, sumatotal;
    int enero = 31, febrero = 28, marzo = 31, abril = 30, mayo = 31, junio = 30, julio = 31, agosto = 31, septiembre = 30, octubre = 31, noviembre = 30, diciembre = 31;

    printf("Introduce el numero del mes: ");
    scanf("%d", &mes);

    if (mes <= 0) {
        printf("Mes no valido");
        exit(-1);
    } else if (mes > 12) {
        printf("Mes no valido");
        exit(-1);
    }

    switch (mes) {
        case 1:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = dia;
            break;
        case 2:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + dia;
            break;
        case 3:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + dia;
            break;
        case 4:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + marzo + dia;
            break;
        case 5:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + marzo + abril + dia;
            break;
        case 6:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + marzo + abril + mayo + dia;
            break;
        case 7:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + marzo + abril + mayo + junio + dia;
            break;
        case 8:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + marzo + abril + mayo + junio + julio + dia;
            break;
        case 9:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + marzo + abril + mayo + junio + julio + agosto + dia;
            break;
        case 10:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + marzo + abril + mayo + junio + julio + agosto + septiembre + dia;
            break;
        case 11:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + marzo + abril + mayo + junio + julio + agosto + septiembre + octubre + dia;
            break;
        case 12:
            printf("Introduce el dia: ");
            scanf("%d", &dia);

            if (dia <= 0) {
                printf("Dia no valido");
                exit(-1);
            } else if (dia > 31) {
                printf("Dia no valido");
                exit(-1);
            }

            suma_dias_mes = enero + febrero + marzo + abril + mayo + junio + julio + agosto + septiembre + octubre + noviembre + dia;
            break;

        break;
    }

    printf("La fecha introducida corresponde al dia %d del año en curso", suma_dias_mes);

    return 0;
}
