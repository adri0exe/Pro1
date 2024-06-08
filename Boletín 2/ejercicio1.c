#include <stdio.h>
/*
 * Determinar si un numero es positivo o negativi
 */

int main() {
    int num;

    //ENTRADA
    printf("introduce un numero entero: ");
    scanf("%d", &num);

    //PROCESO
    if (num >= 0)
        printf("Es positivo");
    else
        printf("Es negativo");

    return 0;
}
