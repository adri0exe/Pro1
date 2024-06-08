#include <stdio.h>

int main() {
    char nom[20];
    int edad;
    int hijos;
    float sueldo_anual;
    float sueldo_mensual;

    //ENTRADA
    printf("Introduzca usted su nombre: \t");
    gets(nom);

    printf("Introduzca usted su edad: \t");
    scanf("%d", &edad);

    printf("Introduzca usted su numero de hijos: \t");
    scanf("%d", &hijos);

    printf("Introduzca usted su sueldo anual (en euros): \t");
    scanf("%f", &sueldo_anual);

    //PROCESO
    sueldo_mensual = sueldo_anual / 12;

    //SALIDA
    printf("Nombre: %s \n", nom);
    printf("Edad: %d \n", edad);
    printf("Numero de hijos: %d \n", hijos);
    printf("Sueldo mensual: %f \n", sueldo_mensual);

    return 0;
}
