#include <stdio.h>
#define PI 3.14159

int main() {
    float radio;
    float area;
    float volumen;


    //ENTRADA
    printf("Introduce el radio de la esfera: \t");
    scanf("%f", &radio);

    //PROCESO
    area = 4 * PI * radio * radio;
    volumen = 4/3.0 * PI * radio * radio * radio;

    //SALIDA
    printf("El area de la esfera es %f y el volumen %f", area, volumen);
    return 0;
}
