#include <stdio.h>
#include <string.h>

#define MAX 100

int contains(char *string, char *substring);

int main() {
    char frase1[MAX], frase2[MAX];

    printf("\nIntroduce la primera frase: ");
    gets(frase1);

    printf("\nIntroduce la segunda frase: ");
    gets(frase2);

    if (contains(frase1, frase2) == -1) {
        printf("\nLa frase no esta contenida en la frase 2");
    } else {
        printf("\nLa frase esta contenida en la frase 2 en la posicion %d", contains(frase1, frase2) + 1);
    }

    return 0;
}

int contains(char *string, char *substring) {
    int long_frase1 = strlen(string);
    int long_frase2 = strlen(substring);

    for (int i = 0; i <= long_frase1 - long_frase2; i++) {
        if (strncmp(&string[i], substring, long_frase2) == 0) {
            return i;
        }
    }

    return -1;
}