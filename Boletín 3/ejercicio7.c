#include <stdio.h>

void fecha(int dia, int mes, int ano) {

    if (ano > 0) {
        if (mes > 0) {
            if (mes <= 12) {
                switch (mes) {
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 10:
                    case 12:
                        if (dia < 0) {
                            printf("LA FECHA ES INCORRECTA (DIA MENOR QUE 0)");
                        } else if (dia > 31) {
                            printf("LA FECHA ES INCORRECTA (EL MES %d TIENE 31 DIAS", mes);
                        } else printf("FECHA CORRECTA");
                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        if (dia < 0) {
                            printf("LA FECHA ES INCORRECTA (DIA MENOR QUE 0)");
                        } else if (dia > 30) {
                            printf("LA FECHA EN INCORRECTA (EL MES %d TIENE 30 DIAS)", mes);
                        } else printf("FECHA CORRECTA");
                        break;
                    case 2:
                        if (ano % 4 == 0) {
                            if (dia > 29) {
                                printf("ERROR EL MES %d TIENE 29 DIAS", mes);
                            } else printf("FECHA CORRECTA");
                        } else printf("FECHA INCORRECTA");
                        break;
                    default:
                        break;
                }
            } else printf("FECHA INCORRECTA (EL MES ES MAYOR A 12)");
        } else printf("FECHA INCORRECTA (EL MES ES MENOR A 0)");
    } else printf("FECHA INCORRECTA (EL ANO ES MENOR A 0)");
}

int main() {
    int dia, mes, ano;

    printf("Introduzca una fecha (dd/mm/aa): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    fecha(dia, mes, ano);

    return 0;
}
