#include <stdio.h>

int main() {
    int num1, num2, num1_digitos, num2_digitos, contador1, contador2;

    printf("\nIntroduzca un numero entero positivo de 3 cifras: ");
    scanf("%d", &num1);
    printf("\nIntroduzca un numero entero positivo de 1 cifra: ");
    scanf("%d", &num2);

    contador1 = num1;
    contador2 = num2;

    do {
        contador1 = contador1/10;
        num1_digitos = num1_digitos + 1;
    } while (contador1 > 0);

    do {
        contador2 = contador2/10;
        num2_digitos = num2_digitos + 1;
    } while (contador2 > 0);

    if (num1 >= 0 && num2 >= 0) {
        if (num1_digitos == 3 && num2_digitos == 1) {
            printf("\n\t%d", num1);
            printf("\n\tx %d", num2);
            printf("\n\t====");
            printf("\n\t%d", num1*num2);
        } else printf("El numero no tiene las cifras indicadas cifras");
    } else printf("Numero negativo");

    return 0;
}
