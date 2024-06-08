#include <stdio.h>

int main() {
    int size = 0;

    printf("Ingrese el tamaño del tablero de ajedrez: ");
    scanf("%d", &size);

    while (size < 0) {
        printf("\n Tamaño no puede ser un numero negativo: ");
        scanf("%d", &size);
    }

    printf("Tablero de ajedrez %d x %d\n", size, size);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i + j) % 2 == 0) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
