#include <stdio.h>

void devolucion(float precio, float pago);

int main() {
    float precio = 6;
    float pago;

    printf("\nPrecio %.2f euros", precio);
    printf("\nIntroduce el pago: ");
    scanf("%f", &pago);

    devolucion(precio, pago);

    return 0;
}

void devolucion(float precio, float pago) {
    float vuelta = 0;
    int euros, cent50, cent20, cent10, cent5, cent2, cent1;

    if (pago < precio) {
        printf("\nERROR: Pago menor al precio");
    } else if (pago == precio) {
        printf("\nDevolucion 0 euros");
    } else if (pago > precio) {
        vuelta = pago - precio;

        euros = vuelta;
        cent50 = (vuelta - euros) * 100;
        cent20 = cent50 % 50;
        cent10 = cent20 % 20;
        cent5 = cent10 % 10;
        cent2 = cent5 % 5;
        cent1 = cent2 % 2;

        printf("\nVuelta a devolver:\n");
        printf("%d euros\n", euros);
        printf("%d monedas de 50 centavos\n", cent50 / 50);
        printf("%d monedas de 20 centavos\n", cent20 / 20);
        printf("%d monedas de 10 centavos\n", cent10 / 10);
        printf("%d monedas de 5 centavos\n", cent5 / 5);
        printf("%d monedas de 2 centavos\n", cent2 / 2);
        printf("%d monedas de 1 centavo\n", cent1);
    }
}