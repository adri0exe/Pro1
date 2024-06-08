#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_DIGITOS 2500


void sumaGrandesNumeros(char num1[], char num2[], char resultado[]);

int main() {
    char num1[MAX_DIGITOS];
    char num2[MAX_DIGITOS];
    char resultado[MAX_DIGITOS + 1];

    for (int i = 0; i < MAX_DIGITOS; ++i) {
        num1[i] = '0' + rand() % 10;
        num2[i] = '0' + rand() % 10;
    }
    num1[MAX_DIGITOS] = '\0'; // Añadir el carácter nulo de terminación
    num2[MAX_DIGITOS] = '\0';

    sumaGrandesNumeros(num1, num2, resultado);

    printf("\nNumero 1: %s\n", num1);
    printf("\nNumero 2: %s\n", num2);
    printf("\n\n\nSuma: %s\n", resultado);

    return 0;
}

void sumaGrandesNumeros(char num1[], char num2[], char resultado[]) {
    int acarreo = 0;

    srand(time(NULL));

    for (int i = MAX_DIGITOS - 1; i >= 0; --i) {
        int digito1 = num1[i] - '0';
        int digito2 = num2[i] - '0';

        int suma = digito1 + digito2 + acarreo;

        resultado[i] = (suma % 10) + '0';
        acarreo = suma / 10;
    }
    resultado[0] = acarreo++;
}