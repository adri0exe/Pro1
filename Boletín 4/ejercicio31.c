#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char* PedirDatos();
bool esDigito(char digito);
bool Val(const char cadena[10]);

int main() {
    char* cadena = PedirDatos();

    if (Val(cadena)) {
        printf("\n%s es convertible a un valor real.\n", cadena);
    } else {
        printf("\n%s no es convertible a un valor real.\n", cadena);
    }

    return 0;
}

char* PedirDatos() {
    static char caracter[10];

    printf("\nIntroduce una cadena: ");
    fgets(caracter, sizeof(caracter), stdin);

    if (strlen(caracter) > 0 && caracter[strlen(caracter) - 1] == '\n') {
        caracter[strlen(caracter) - 1] = '\0';
    }

    return caracter;
}

bool esDigito(char digito) {
    return (digito >= '0' && digito <= '9');
}

bool Val(const char cadena[10]) {
    int puntos = 0;

    for (int i = 0; i < 10; i++) {
        if (cadena[i] == '\0') {
            break;
        }
        if (cadena[i] == '.') {
            puntos++;
            if (puntos > 1) {
                return false;
            }
        } else if (!esDigito(cadena[i])) {
            return false;
        }
    }

    return true;
}
