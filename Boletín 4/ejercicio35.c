#include <stdio.h>
#include <string.h>

#define MAX 3
#define CHAR 15

typedef struct {
    char capital[CHAR];
    int poblacion;
} ciudad;

void PedirDatos(ciudad *datos);
void Ordenar(ciudad *datos);

int main() {
    ciudad datos[MAX];

    printf("------ CAPITALES EUROPEAS Y POBLACION ORDENADAS ------");

    PedirDatos(datos);
    Ordenar(datos);

    for (int i = 0; i < MAX; i++) {
        printf("\nCapital: %s\t", datos[i].capital);
        printf("%d habitantes", datos[i].poblacion);
    }

    return 0;
}

void PedirDatos(ciudad *datos) {
    for (int i = 0; i < MAX; i++) {
        printf("\nIntroduce la capital %d: ", i);
        scanf("%s", datos[i].capital);

        printf("\nIntroduce la poblacion de la capital %d:", i);
        scanf("%d", &datos[i].poblacion);
    }
}

void Ordenar(ciudad *datos) {
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            if (datos[j].poblacion > datos[j + 1].poblacion) {
                ciudad temp = datos[j];
                datos[j] = datos[j + 1];
                datos[j + 1] = temp;
            }
        }
    }
}