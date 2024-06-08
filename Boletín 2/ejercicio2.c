#include <stdio.h>
/*
 * Determinar si un numero entero es par o impar
 */

int main() {
     int num, valor1;

    //ENTRADA
    printf("Introduce un numero entero: ");
    scanf("%d", &num);

    //PROCESO
     valor1 = num % 2;

    if (valor1 == 0)
        printf("Es par");
    else
        printf("Es impar");
    return 0;
}
