#include <stdio.h>
#include <string.h>

#define MAX_DESTINATARIOS 3
#define MAX_NOMBRE 50

struct Carta {
    char destinatario[MAX_NOMBRE];

};

void modificarDestinatario(struct Carta *cartas, int indice);
void introducirDatosCarta(struct Carta *carta, int indice);
void mostrarDestinatarios(struct Carta *cartas);

int main() {
    struct Carta cartas[MAX_DESTINATARIOS];

    for (int i = 0; i < MAX_DESTINATARIOS; i++) {
        introducirDatosCarta(&cartas[i], i);
    }

    mostrarDestinatarios(cartas);

    int indiceModificar;

    printf("Ingrese el número de la carta que desea modificar: ");
    scanf("%d", &indiceModificar);

    modificarDestinatario(cartas, indiceModificar - 1);

    mostrarDestinatarios(cartas);

    return 0;
}

void modificarDestinatario(struct Carta *cartas, int indice) {
    if (indice >= 0 && indice < MAX_DESTINATARIOS) {
        printf("Ingrese el nuevo nombre para el destinatario de la carta %d: ", indice + 1);
        scanf("%s", cartas[indice].destinatario);
        printf("Nombre del destinatario modificado con éxito.\n");
    } else {
        printf("Índice de carta inválido.\n");
    }
}

void introducirDatosCarta(struct Carta *carta, int indice) {
    printf("Ingrese el nombre del destinatario para la carta %d: ", indice + 1);
    scanf("%s", carta->destinatario);
}

void mostrarDestinatarios(struct Carta *cartas) {
    printf("Nombres de los destinatarios de las cartas:\n");
    for (int i = 0; i < MAX_DESTINATARIOS; i++) {
        printf("Carta %d: %s\n", i + 1, cartas[i].destinatario);
    }
}