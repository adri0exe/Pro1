#include <stdio.h>
/*
 * Determinar si el primer numero es o no divisible por el segundo
 */

int main() {
    int num1, num2, resto;
    //ENTRADA
    printf("Introduce dos numeros enteros separados por espacios: ");
    scanf("%d%d", &num1, &num2);

    //PROCESO
    resto = num1 % num2;

    if (resto == 0)
        printf("El primer numero es divisible por el segundo");
    else
        printf("El primer numero no es divisible por el segundo");

    return 0;
}
