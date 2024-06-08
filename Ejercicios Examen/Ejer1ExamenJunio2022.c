#include <stdio.h>
#include <string.h>

#define MAX 50

int foo(char *s1, char *s2);

int main() {
    char frase1[MAX], frase2[MAX];

    printf("\nIntroduce la primera frase: ");
    scanf("%s", frase1);

    printf("\nIntroduce la segunda frase: ");
    scanf("%s", frase2);

    if (foo(frase1, frase2) == -1) {
        printf("\nFrase 1 es menor a frase 2");
    } else if (foo(frase1, frase2) == 0) {
        printf("\nLas dos frases son iguales");
    } else if (foo(frase1, frase2) == 1) {
        printf("\nFrase 1 es mayor a frase 2");
    }

    return 0;
}

int foo(char *s1, char *s2) {
    int long_frase1 = strlen(s1);
    int long_frase2 = strlen(s2);

    if (long_frase1 > long_frase2) {
        return 1;
    } else if (long_frase1 < long_frase2) {
        return -1;
    }

    return 0;
}
