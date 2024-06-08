#include <stdio.h>

int main() {
    char letra;

    puts("B.- Bebe");
    puts("A.- Adolescente");
    puts("M.- Mujer");
    puts("H.- Hombre");
    printf("\nIntorduce una letra: ");
    scanf("%c", &letra);

    switch (letra) {
        case 'B':
        case 'b':
            printf("Bebe");
            break;

        case 'A':
        case 'a':
            printf("Adolescente");
            break;

        case 'M':
        case 'm':
            printf("Mujer");
            break;

        case 'H':
        case 'h':
            printf("Hombre");
            break;

        default:
            puts("Opcion no valida");
            break;
    }

    return 0;
}
