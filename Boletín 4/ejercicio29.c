#include <stdio.h>
#include <string.h>

#define MAX 100

void PedirDatosFrase(char *frase);
void FraseReves(char *frase, char *frase_reves);

int main() {
    char frase[MAX];
    char frase_reves[MAX];

    printf("------ FRASE AL REVES ------");

    PedirDatosFrase(frase);
    FraseReves(frase, frase_reves);

    printf("La frase al reves es: %s", frase_reves);

    return 0;
}

void PedirDatosFrase(char *frase) {
    printf("\nIntroduce una frase: ");
    fgets(frase, MAX, stdin);

    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }
}

void FraseReves(char *frase, char *frase_reves) {
    int longitud = strlen(frase);

    for (int i = longitud - 1; i >= 0; i--) {
        frase_reves[longitud - 1 - i] = frase[i];
    }
    frase_reves[longitud] = '\0';
}