#include <stdio.h>

void Letra(char letra) {
    if (letra >= 'A' && letra <= 'Z') {
        printf("Mayuscula");
    } else if (letra >= 'a' && letra <= 'z') {
        printf("Minuscula");
    } else printf("No es letra");
}

int main() {
    char letra;

    printf("Introduce un caracter: ");
    scanf("%c", &letra);
    Letra(letra);

    return 0;
}
