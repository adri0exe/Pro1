#include <stdio.h>

#define MAX 10

void PedirDatosArray(int *array);
void PrintArray(int *array);

int main() {
    int array[MAX];

    printf("\n------ CREAR ARRAY DE 10 NUMEROS ------");
    PedirDatosArray(array);
    PrintArray(array);

    return 0;
}

void PedirDatosArray(int *array) {
    for (int i = 0; i < MAX; i++) {
        printf("\nPosicion %d = ", i + 1);
        scanf("%d", &array[i]);
    }
}

void PrintArray(int *array) {
    for (int i = 0; i < MAX; i++) {
        printf("\n[%d] = %d", i+1, array[i]);
    }
}