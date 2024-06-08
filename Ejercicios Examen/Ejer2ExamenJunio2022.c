#include <stdio.h>

void MostrarCambioBaseR(int numero, int base);

int main() {

    return 0;
}

void MostrarCambioBaseR(int numero, int base) {
    int resto;

    if (numero < base) {
        printf("\n%d", numero);
    } else {
        resto = numero % base;
        numero = (numero - resto) / base;
        MostrarCambioBaseR(numero, base);
        printf("\n%d", resto);
    }
}