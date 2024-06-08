#include <stdio.h>
#include <string.h>

#define MAX 100

void PedirFrase(char *frase);
int LeerVocales(char *frase);
void FrecuenciaAparicion(char *frase);

int main() {
    char frase[MAX];

    printf("------ FRECUENCIA APARICION VOCALES ------");

    PedirFrase(frase);
    FrecuenciaAparicion(frase);

    return 0;
}

void PedirFrase(char *frase) {
    printf("\nIntroduce una frase:");
    fgets(frase, MAX, stdin);

    frase[strcspn(frase, "\n")] = '\0';
}

int LeerVocales(char *frase) {
    int contador = 0;
    for (int i = 0; frase[i] != '\0'; ++i) {
        char letra = frase[i];
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            contador++;
        }
    }
    return contador;
}

void FrecuenciaAparicion(char *frase) {
    int longitud_cadena = strlen(frase);
    int vocales = LeerVocales(frase);
    float frecuencia = (float)vocales / longitud_cadena;

    printf("\n\nFrecuancia de aparecicion de vocales es: %.2f", frecuencia);
}