#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX 3
#define CHAR 15

typedef struct {
    char palabra[CHAR];
    bool mayus;
    int vocales;
    int aparicion;
    int caracteres;
} array;

void PedirPalabras(array datos1[MAX]);
bool Mayus(char palabra);
void ContarVocales(array *datos);

int main() {
    array datos1[MAX];

    printf("------ DATOS ------");

    PedirPalabras(datos1);

    for (int i = 0; i < MAX; i++) {
        ContarVocales(&datos1[i]);

        printf("\nPalabra: %s", datos1[i].palabra);
        printf("\nMayusculas: %s", Mayus(datos1[i].palabra[0]) ? "Si" : "No");
        printf("\nNumero de vocales: %d", datos1[i].vocales);
        printf("\n");
    }

    return 0;
}

void PedirPalabras(array datos1[MAX]) {
    for (int i = 0; i < MAX; i++) {
        printf("\nIntroduce la palabra %d:", i);
        scanf("%s", datos1[i].palabra);
    }
}

bool Mayus(char palabra) {
    return (palabra >= 'A' && palabra <= 'Z');
}

void ContarVocales(array *datos) {
    datos->vocales = 0;
    for (int i = 0; i < strlen(datos->palabra); i++) {
        char letra = tolower(datos->palabra[i]);  // Convertir a minúscula antes de comparar
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            datos->vocales++;
        }
    }
}
