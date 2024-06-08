#include <stdio.h>

int main() {
    char caracter;

    printf("Introduzca un caracter: ");
    scanf("%s", &caracter);

    if (caracter >= '0' && caracter <= '9') {
        printf("%c es un digito", caracter);
    } else if (caracter >= 'a' || caracter >= 'A') {
        switch (caracter) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("%c es una vocal", caracter);
                break;

            default:
                printf("%c es una consonantes", caracter);
                break;
        }
    } else printf("%c Es un caracter especial", caracter);

    return 0;
}
