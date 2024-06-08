#include <stdio.h>
#include <math.h>

/*
 *  Resolver ecuaciones de segundo grado
 */

int main() {
    float a, b, c;
    float resultado, resultado1, resultado2, resultado3, compleja;
    float raiz = (b*b) - (4*a*c);

    printf("RESOLUCION DE ECUACIONES DE SEGUNDO GRADO\n");
    printf("Introduce el valor coeficiente de X^2: ");
    scanf("%f", &a);
    printf("Introduce el coeficiente de X: ");
    scanf("%f", &b);
    printf("Introduce el termino independiente: ");
    scanf("%f", &c);
    printf("La ecuacion a resolver es (%.2f)X^2 + (%.2f)X + (%.2f)", a, b, c);

    switch ((int) raiz) {
        case 0:
            printf("\tRaiz real doble\n");
            resultado = -b/2*a;
            printf("%.2f", resultado);
            break;
        default:
            if (raiz>0) {
                printf("\tReal y distinta\n");
                resultado1 = (-b + sqrtf(raiz));
                resultado2 = (-b - sqrtf(raiz));
                printf("x1 = %.2f \n x2 = %.2f", resultado1/(2*a), resultado2/(2*a));
            } else {
                printf("\tComplejas conjugadas\n");
                resultado3 = (-b)/2*a;
                compleja = sqrtf(-raiz)/2*a;
                printf("x1 = %.2f + %.2f i \n x2 = %.2f - %.2f i", resultado3, compleja, resultado3, compleja);
            }

            break;
    }

    return 0;
}
