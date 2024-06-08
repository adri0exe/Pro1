#include <stdio.h>
#define PI 3.14159
int main() {
    float volumen = 77, area = 0, radio = 0;

    //ENTRADA
    printf("Intruduce el radio de la esfera: \t");
    scanf("%f", &radio);

    //PROCESO
    volumen = (4/3.0) * 3.14159 * radio * radio * radio;
    area = 4 * PI * radio * radio;

    //SALIDA
    printf("El volumen de la esfera es %.2f y el area es %.2f, siendo el radio %.f", volumen, area, radio);
    return 0;
}
