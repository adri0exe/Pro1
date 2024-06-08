#include <stdio.h>

int main() {
    char nom[20];
    int edad;
    int canas;
    int transporte;
    char euro = '€';

    //ENTRADA
    printf("Introduzca usted su nombre: \t");
    gets(nom);

    printf("Introduzca usted su edad: \t");
    scanf("%d", &edad);

    printf("Introduzca usted el total de gastos semanales en canas (en euros): \t");
    scanf("%d", &canas);

    printf("Introduzca usted el total de sus gastos semanales en transporte (en euros): \t");
    scanf("%d", &transporte);

    //PROCESO

    //SALIDA
    printf("Nombre: %s \n", nom);
    printf("Edad: %d \n", edad);
    printf("Gastos semanales en canas: %d %c\n", canas, euro);
    printf("Total gastos semanales: %d %c\n", transporte, euro);

    return 0;
}
