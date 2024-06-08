#include <stdio.h>
#include <math.h>

int main() {
    float t ,b;
    int total, tamaño;

    printf("Kilogramos de baldosas en el camion; ");
    scanf("%f", &t);
    printf("Kilogramos que pesa una baldosa: ");
    scanf("%f", &b);

    total = (t/b);
    tamaño = sqrt(total);

    printf("El camion transporta %d baldosas y el lado del cuadrado mas grande que puede formar es usando %d baldosas", total, tamaño);

    return 0;
}
