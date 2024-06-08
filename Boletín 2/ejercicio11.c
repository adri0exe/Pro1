#include <stdio.h>
#include <math.h>

int main() {
    float ecuacion1, ecuacion2_1, ecuacion2_2, ecuacion3, ecuacion4_1, ecuacion4_2;
    int a, b, c;

    printf("Introduce el coeficiente de X^2 (Num entero): ");
    scanf("%d", &a);
    printf("\nIntroduce el coeficiente de X (Num entero): ");
    scanf("%d", &b);
    printf("\nIntroduce el termino independiente (Num entero): ");
    scanf("%d", &c);

    if (a == 0) {
        ecuacion1 = (-c)/b;
        printf("\nSolucion de X = %.2f\n", ecuacion1);
    } else if (b == 0) {
        ecuacion2_1 = +sqrtf((-c)/a);
        ecuacion2_2 = -sqrtf((-c)/a);
        printf("\nSolucion de X1 = %.2f", ecuacion2_1);
        printf("\nSolucion de X2 = %.2f\n", ecuacion2_2);
    } else if (c == 0) {
        ecuacion3 = (-b)/a;
        printf("\nSolucion de X1 = 0");
        printf("\nSolucion de X2 = %.2f\n", ecuacion3);
    } else {
        ecuacion4_1 = (-b+sqrtf(b^2-4*a*c))/(2*a);
        ecuacion4_2 = (-b-sqrtf(b^2-4*a*c))/(2*a);
        printf("\nSolucion de X1 = %.2f", ecuacion4_1);
        printf("\nSolucion de X2 = %.2f\n", ecuacion4_2);
    }

    return 0;
}
