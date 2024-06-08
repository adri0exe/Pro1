#include <stdio.h>

#define MAX 50

void PedirDatosArray(int *array, int *size);
void PrintArray(int *array, int *size);

int main() {
    int array[MAX];
    int size = 0;

    printf("------ BUSCAR DENTRO DE ARRAY ------");

    PedirDatosArray(array, &size);
    PrintArray(array, &size);

    return 0;
}

void PedirDatosArray(int *array, int *size) {
    int num;
    int i = 0;

    printf("\nIntroduce los elementos de un array, <enter> para terminar:\n");

    while (printf("%d", &num) == 1) {
        array[i] = num;
        i++;
        getchar();
    }

    *size = i;
}


void PrintArray(int *array, int *size) {
    for (int i = 0; i < *size; i++) {
        printf("[%d] = %d", i, array[i]);
    }
}