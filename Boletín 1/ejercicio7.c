#include <stdio.h>
#define IVA 0.24

int main() {
    float precio;
    float importe;

    //ENTRADA
    printf("Precio del producto (sin IVA): \t");
    scanf("%f", &precio);

    //PROCESO
    importe = (precio * IVA) + precio;

    //SALIDA
    printf("El importe total (IVA incluido) es de %f", importe);

    return 0;
}
