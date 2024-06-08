#include <stdio.h>
#include <string.h>

#define MAX 100

void PedirDatosCadena(char *cadena);
void ContarCadena(char *cadena);

int main() {
    char cadena[MAX];

    printf("------ NUMERO DE CARACTERES EN CADENA ------");

    PedirDatosCadena(cadena);
    ContarCadena(cadena);

    return 0;
}

void PedirDatosCadena(char *cadena) {
    printf("\nIntroduce una frase: ");
    fgets(cadena, MAX, stdin);

    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }
}

void ContarCadena(char *cadena) {
    int  longitud = 0;

    printf("\nPalabra  \tlongitud\n");
    for (int i = 0; i <= strlen(cadena); i++) {
        if (cadena[i] != ' ' && cadena[i] != '\0') {
            // Si no es un espacio o el final de la cadena, incrementar la longitud de la palabra
            longitud++;
        } else {
            // Si es un espacio o el final de la cadena, imprimir la palabra y su longitud
            if (longitud > 0) {
                printf("%.*s %d\n", longitud, &cadena[i - longitud], longitud);
                longitud = 0;  // Restablecer la longitud de la palabra para la siguiente palabra
            }
        }
    }
}