#include <stdio.h>
#include <stdlib.h>

/*
 * Datos de la fecha 26/10/2023
 */

int main() {
    int dia, mes, ano, edaddia, edadmes, edadano;
    int diaenero = 31, diafebrero = 28, diamarzo = 31, diaabril = 30, diamayo = 31, diajunio = 30, diajulio = 31, diaagosto = 31, diaseptiembre = 30, diaoctubre = 31, dianoviembre = 30, diadiciembre = 31;
    int mesenero = 1, mesfebrero = 2, mesmarzo = 3, mesabril = 4, mesmayo = 5, mesjunio = 6, mesjulio = 7, mesagosto = 8, messeptiembre = 9, mesoctubre = 10, mesnoviembre = 11, mesdiciembre = 12;

    printf("Introduce su fecha de cumpleanos (dia/mes/ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    edadano = 2023 - ano;
    edadmes = 12 - mes;

    if (dia <= 0) {
        printf("Dia no valido");
        exit(-1);
    } else if (dia > 31) {
        printf("Dia no valido");
        exit(-1);
    } else if (mes <= 0) {
        printf("Mes no válido");
        exit(-1);
    } else if (mes > 12) {
        printf("Mes no valido");
        exit(-1);
    }

    if (mes == 1) {
        edaddia = 26 - dia;
    } else if (mes == 2) {
        edaddia = 26 - dia;
    } else if (mes == 3) {
        edaddia = 26 - dia;
    } else if (mes == 4) {
        edaddia = 26 - dia;
    } else if (mes == 5) {
        edaddia = 26 - dia;
    } else if (mes == 6) {
        edaddia = 26 - dia;
    } else if (mes == 7) {
        edaddia = 26 - dia;
    } else if (mes == 8) {
        edaddia = 26 - dia;
    } else if (mes == 9) {
        edaddia = 26 - dia;
    } else if (mes == 10) {
        edaddia = 26 - dia;
    } else if (mes == 11) {
        edaddia = 26 - dia;
    } else if (mes == 12) {
        edaddia = 26 - dia;
    }

    printf("Tienes %d año(s), %d mese(s) y %d dia(s)", edadano, edadmes, edaddia);

    return 0;
}
