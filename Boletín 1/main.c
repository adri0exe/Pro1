#include <stdio.h>

int main() {
    float base;
    float altura;
    float perimetro;

    //ENTRADA
    printf("Introduce la base del rectangulo: \t");
    scanf("%f", &base);

    printf("Introduce la altura del rectangulo: \t");
    scanf("%f", &altura);

    //PROCESO
    perimetro = 2 * (altura + base);

    //SALIDA
    printf("El perimetro del rectangulo de base %f y altura %f es %f", base, altura, perimetro);
    return 0;
}
