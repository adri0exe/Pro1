#include <stdio.h>

int main() {
    float base;
    float altura;
    float superficie;

    //ENTRADA
    printf("Introduce la base del rectgangulo: \t");
    scanf("%f", &base);

    printf("Introduce la altura del rectangulo: \t");
    scanf("%f", &altura);

    //PROCESO
    superficie = base * altura;

    //SALIDA
    printf("La superficie del rectangulo es %f", superficie);
    return 0;
}
