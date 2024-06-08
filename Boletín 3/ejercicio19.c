#include <stdio.h>

char digito(int letra) {
    if (letra < 'a' || letra > 'z') {
        return letra;
    } else return letra - ('a' - 'A');
}

int main() {
    char c[200];

    printf("Introduce un caracter o una cadena de caracteres:");
    scanf("%s", &c);

    for (int i = 0; i < c[i] != '\0'; ++i) {
        printf("%c", digito(c[i]));
    }

    return 0;
}
