#include <stdio.h>

int main() {
    float altura;
    float base;
    float superficie;
    //ENTRADA
    printf("Introduzca la altura del triangulo:");
    scanf("%f", &altura);

    printf("Introduzca la bsae del triangulo:");
    scanf("%f", &base);

    //PROCESO
    superficie = (base * altura) / 2.0;

    //SALIDA
    printf("La superficie del triangulo de base %f y altura %f es %f", base, altura, superficie);

    return 0;
}
