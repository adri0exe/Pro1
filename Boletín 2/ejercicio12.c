#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    int num_mayor, num_menor;
    float cociente, resto;

    printf("Introduce el primer numero (positivo): ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero (positivo): ");
    scanf("%d", &num2);
    printf("Introduce el tercer numero (positivo): ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        num_mayor = num1;
        if (num2 > num3) {
            num_menor = num3;
        } else num_menor = num2;
    } else if (num2 > num1 && num2 > num3) {
        num_mayor = num2;
        if (num1 > num3) {
            num_menor = num3;
        } else num_menor = num1;
    } else if (num3 > num1 && num3 > num2) {
        num_mayor = num3;
        if (num1 > num2) {
            num_menor = num2;
        } else num_menor = num1;
    }

    if (num_menor == 0) {
        printf("\nNumero menor es igual a 0");
        exit(-1);
    }

    cociente = num_mayor / num_menor;
    resto = num_mayor % num_menor;

    printf("\n%d dividido | entre %d", num_mayor, num_menor);
    printf("\n\t     -------\n");
    printf("\tR: %.0f\tC: %.0f", resto, cociente);



    return 0;
}
