#include <stdio.h>
#include <string.h>

#define MAX 100

void PedirFrase(char *frase);
void PrintFrase(char *frase);
void CambiarFrase(char *frase, char *palabra_original, char *nueva_palabra);

int main() {
    char frase[MAX];
    char palabra_original[MAX];
    char nueva_palabra[MAX];

    printf("------ SUSTITUIR PALABRA EN FRASE ------");

    PedirFrase(frase);

    printf("\nIntroduce la palabra que quieras cambiar: ");
    fgets(palabra_original, MAX, stdin);

    printf("\nIntroduce la nueva palabra: ");
    fgets(nueva_palabra, MAX, stdin);

    CambiarFrase(frase, palabra_original, nueva_palabra);
    PrintFrase(frase);

    return 0;
}

void PedirFrase(char *frase) {
    printf("\nIntroduce una frase: ");
    fgets(frase, MAX, stdin);
}

void PrintFrase(char *frase) {
    printf("\n%s", frase);
}

void CambiarFrase(char *frase, char *palabra_original, char *nueva_palabra) {
    char *posicion_palabra = strstr(frase, palabra_original);

    if (posicion_palabra != NULL) {
        // Copia la parte de la cadena antes de la palabra original
        char parteAnterior[MAX];
        strncpy(parteAnterior, frase, posicion_palabra - frase);
        parteAnterior[posicion_palabra - frase] = '\0';

        // Copia la parte de la cadena después de la palabra original
        char partePosterior[MAX];
        strcpy(partePosterior, posicion_palabra + strlen(palabra_original));

        // Combina la parte anterior, la nueva palabra y la parte posterior
        sprintf(frase, "%s%s%s", parteAnterior, nueva_palabra, partePosterior);
    } else {
        printf("\nLa palabra original no se encontró en la cadena");
    }
}