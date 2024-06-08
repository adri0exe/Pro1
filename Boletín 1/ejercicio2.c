#include <stdio.h>

int main() {
    char nom[20];
    char apellidos[30];
    int edad;
    int jubilacion;

    //ENTRADA
    printf("Introduce tu nombre: \t");
    gets(nom);

    printf("Introduce tus apellidos: \t");
    gets(apellidos);

    printf("Introduce tu edad: \t");
    scanf("%d", &edad);

    //PROCESO
    jubilacion = 67 - edad;

    //SALIDA
    printf("Sr/Sra. %s, le faltan aun %d años para jubilarse", apellidos, jubilacion);
    return 0;
}
