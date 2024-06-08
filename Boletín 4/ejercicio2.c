#include <stdio.h>

#define MAX 7
#define MAX_NOMBRE 50

void PedirDatosArray(char (*array)[MAX_NOMBRE]);
void PrintArray(char (*array)[MAX_NOMBRE]);

int main() {
    char array[MAX][MAX_NOMBRE];
    printf("\n------ CREAR ARRAY DE NOMBRES DE NOMBRES DE ANIMALES ------");

    PedirDatosArray(array);
    PrintArray(array);

    return 0;
}

void PedirDatosArray(char (*array)[MAX_NOMBRE]) {
    for (int i = 0; i < MAX; i++) {
        printf("\nPosicion %d = ", i+1);
        scanf("%s", array[i]);
    }
}

void PrintArray(char (*array)[MAX_NOMBRE]) {
    for (int i = 0; i < MAX; i++) {
        printf("\n[%d] = %s", i+1, array[i]);
    }
}