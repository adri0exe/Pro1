#include <stdio.h>
#include <string.h>

#define CHAR 50

void PedirFrase(char *frase);
int ContarVocalesDiferentes(char *palabra);

int main() {
    char frase[CHAR];

    printf("------ PALABRAS CON 3 VOCALES DIFERENTES ------");

    PedirFrase(frase);

    char *token = strtok(frase, " \t\n");
    int contadorPalabras = 0;

    while (token != NULL) {
        if (ContarVocalesDiferentes(token) >= 3) {
            contadorPalabras++;
        }
        token = strtok(NULL, " \t\n");
    }

    printf("\nNumero de palabras con al menos tres vocales diferentes: %d\n", contadorPalabras);

    return 0;
}

void PedirFrase(char *frase) {
    printf("\nIntroduce una frase: ");
    fgets(frase, CHAR, stdin);
}

int ContarVocalesDiferentes(char *palabra) {
    char vocales[] = "aeiouAEIOU";
    int contador = 0;

    for (int i = 0; palabra[i] != '\0'; i++) {
        if (strchr(vocales, palabra[i]) && strchr(palabra, palabra[i]) == &palabra[i]) {
            contador++;
        }
    }

    return contador;
}
