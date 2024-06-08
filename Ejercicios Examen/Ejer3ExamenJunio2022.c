#include <stdio.h>

void EsPrimo(int num);

int main() {
    int num;

    printf("Introduce un numero: ");
    scanf("%d", &num);

    EsPrimo(num);

    return 0;
}

void EsPrimo(int num) {
    int resto = 0;

    if (num == 0 || num == 1) {
        printf("\nEl numero %d no es primo", num);
    } else if (num == 2) {
        printf("\nEl numero %d es primo", num);
    } else {
        for (int i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                resto++;
            }
        }

        if (resto == 0) {
            printf("\nEl numero %d es primo", num);
        } else {
            printf("\nEl numero %d no es primo", num);
        }

    }
}