#include <stdio.h>
#include <string.h>

#define MAX 100

void PedirDatosFrase(char *frase);
void EspaciosFrase(char *frase, char *frase_limpia);

int main() {
    char frase[MAX];
    char frase_limpia[MAX];

    printf("------ SUSTITUIR ESPACIOS DE FRASE ------");

    PedirDatosFrase(frase);
    EspaciosFrase(frase, frase_limpia);

    return 0;
}

void PedirDatosFrase(char *frase) {
    printf("\nIntroduce una frase: ");
    fgets(frase, MAX, stdin);

    if (frase[strlen(frase) - 1] == '\n') {
        frase[strlen(frase) - 1] = '\0';
    }
}

void EspaciosFrase(char *frase, char *frase_limpia) {
    int espacio_previo = 0;
    int j = 0;

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ') {
            // Si el carácter actual no es un espacio, copiarlo a la nueva cadena
            frase_limpia[j] = frase[i];
            j++;
            espacio_previo = 0;
        } else {
            // Si el carácter actual es un espacio
            if (espacio_previo == 0) {
                // Si el carácter anterior no fue un espacio, copiarlo a la nueva cadena
                frase_limpia[j++] = ' ';
            }
            espacio_previo = 1;
        }
    }

    // Agregar el carácter nulo al final de la nueva cadena
    frase_limpia[j] = '\0';

    printf("\nFrase obtenida: %s\n", frase_limpia);
}