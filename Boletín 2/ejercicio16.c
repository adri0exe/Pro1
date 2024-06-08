#include <stdio.h>

int main() {
    char nombre[10];
    int edad;

    printf("Nombre:");
    scanf("%s", &nombre);
    printf("Edad: ");
    scanf("%d", &edad);

    if (edad > 0) {
        if (edad < 32) {
            printf("%s es JOVEN", nombre);
        } else if (edad >= 32 && edad <= 75) {
            printf("%s es ADULTO/A", nombre);
        } else if (edad > 75) {
            printf("%s es ANCIANO/A", nombre);
        }
    } else printf("Error, edad negativa");

    return 0;
}
