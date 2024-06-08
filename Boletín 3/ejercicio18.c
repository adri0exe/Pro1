#include <stdio.h>

int digito(char letra) {
    if (letra >= 'A' && letra <= 'Z') {
        return 1;
    } else if (letra >= 'a' && letra <= 'z') {
        return 2;
    } else return 3;
}

int main() {
    char caracter[200];
    int minus, mayus;
    int digit = mayus = minus = 0;

    printf("Introduce un caracter: ");
    scanf("%s", &caracter);

    for (int i = 0; i < caracter[i] != '\n'; ++i) {
        if (1 == digito(caracter[i])) {
            mayus++;
        } else if (2 == digito(caracter[i])) {
            minus++;
        } else if (3 == digito(caracter[i])) {
            digit++;
        }
    }

    printf("Hay %d mayusculas, %d minusculas y %d digitos", mayus, minus, digit);

    return 0;
}
