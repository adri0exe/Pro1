#include <stdio.h>
#include <stdbool.h>

int main() {
    bool multiplo = false;
    int num, divisor = 7, resto;

    //ENTRADA
    printf("Introduzca un numero real: ");
    scanf("%d", &num);
    printf("Escriba un numero entero del que desee saber si %d es multiplo: ", num);
    scanf("%d", &divisor);

    //PROCESO
    multiplo = resto == 0;
    resto = num % divisor;

    //SALIDA
    if (multiplo) printf("El %d es multiplo del %d", num, divisor);
    else printf("El %d NO es multiplo del %d", num, divisor);


    return 0;
}
