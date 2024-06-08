#include <stdio.h>

int main() {
    char nombre[20], apellido[50];
    float sueldo, transporte, ocio, comida, otros, pocio, pcomida, ptransporte, potros, gasto;

    printf("Introduce tu numbre: ");
    scanf("%s", &nombre);
    printf("Introduce tu apellido :");
    scanf("%s", &apellido);
    printf("Introduce tu sueldo anual: ");
    scanf("%f", &sueldo);
    printf("Introduce tu gasto de ocio: ");
    scanf("%f", &ocio);
    printf("Introduce tu gasto de transporte: ");
    scanf("%f", &transporte);
    printf("Introduce tu gasto de otros: ");
    scanf("%f", &otros);
    printf("Introduce tu gasto de comida: ");
    scanf("%f", &comida);

    pcomida = comida/sueldo*100;
    pocio = ocio/sueldo*100;
    ptransporte = transporte/sueldo*100;
    potros = otros/sueldo*100;
    gasto = ocio+otros+transporte+comida;

    printf("*********************************************************\n");
    printf("********\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t********");


    return 0;
}
