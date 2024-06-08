#include <stdio.h>
/*
 * Programa que muestra el mayor de tres numeros introducidos
 */

int main() {
    int num1, num2, num3, mayor;

    //ENTRADA
    printf("Primer numero:\t");
    scanf("%d", &num1);
    printf("Segundo numero:\t");
    scanf("%d", &num2);
    printf("Tercer numero:\t");
    scanf("%d", &num3);

    //PROCESO
    if (num1 > num2 && num1>num3) {
        printf("%d es el mayor", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%d es el mayor", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("%d es el mayor", num3);
    }



    return 0;
}
