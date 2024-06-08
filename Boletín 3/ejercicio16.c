#include <stdio.h>

void Digito(char dig) {
    if (dig >= 'a' || dig >= 'A') {
        printf("No es digito");
    } else printf("Es un digito");
}

int main() {
    char dig;

    printf("Introduce un caracter: ");
    scanf("%c", &dig);
    Digito(dig);

    return 0;
}
