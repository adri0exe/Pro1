#include <stdio.h>
#include <string.h>

#define MAX 100

void PedirDatos(char frase[MAX]);
void ContarCaracteres(char frase[MAX]);

int main() {
    char frase[MAX];

    printf("------ CALCULAR LETRAS, DIGITOS DE FRASE ------");

    PedirDatos(frase);
    ContarCaracteres(frase);

    return 0;
}

void PedirDatos(char frase[MAX]) {
    printf("\nIntroduce una frase: ");
    fgets(frase, MAX, stdin);

    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }
}

void ContarCaracteres(char frase[MAX]) {
    int letras = 0;
    int numeros = 0;
    int caracteres = 0;

    for (int i = 0; i < strlen(frase); i++) {
        if ((frase[i] >= 'A' && frase[i] <= 'Z') || (frase[i] >= 'a' && frase[i] <= 'z')) {
            letras++;
        } else if (frase[i] >= '0' && frase[i] <= '9') {
            numeros++;
        } else if (frase[i] != ' ') {
            caracteres++;
        }
    }

    printf("La frase tiene %d letras, %d numeros y %d caracteres.", letras, numeros, caracteres);
}