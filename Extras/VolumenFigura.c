#include <stdio.h>

/*
 * autor:
 * objetivo
 * in:
 * out:
 * main:
 */

int main() {
    float volumen = 5.956f, largo = 76, ancho = 1, alto = 2;

    //ENTRADA
    printf("Introduce la longitud del aula: ");
    scanf("%f", &largo);
    printf("Introduce la anchura del aula: ");
    scanf("%f", &ancho);
    printf("Introduce la altura del aula: ");
    scanf("%f", &alto);
    //PROCESO
    volumen = largo * ancho * alto;
    //SALIDA
    printf("El volumen del recinto es %.2f metros cubicos,"
           "siendo su altura %.1f, su anchura %.1f y su longitud %.1f",volumen, alto, ancho, largo);
    return 0;
}
