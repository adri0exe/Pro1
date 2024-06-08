#include <stdio.h>
#include <math.h>

void ecuacion() {
    int a, b, c;

    float sol1 = ((-b) + (sqrt(b*b-4*a*c))) / 2*a;
    float sol2 = ((-b) - (sqrt(b*b-4*a*c))) / 2*a;

    printf("Los resultados son x1= %f x2= %f", sol1, sol2);
}

int main() {
    int a, b, c;

    printf("Introduzca los coeficientes de la ecuacion separados por espacios: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("La ecuacion a resolver es %d x^2 + %d x + %d\n", a, b, c);
    ecuacion();
    return 0;
}
