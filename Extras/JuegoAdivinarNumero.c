#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int CrearNumero();

int main() {
    int num;
    int num_aleatorio = CrearNumero();
    bool continuar = true;

    srand(time(NULL));

    do {
        printf("\nInroduce el numero que creas correcto: ");
        scanf("%d", &num);

        if (num > num_aleatorio) {
            printf("\nEl numero generado es menor a %d", num);
            continuar = true;
        } else if (num < num_aleatorio) {
            printf("\nEl numero generado es mayor a %d", num);
            continuar = true;
        } else if (num == num_aleatorio) {
            printf("\n HAS ACERTADO!!!");
            continuar = false;
        } else {
            printf("\nERROR: Algo ha salido mal");
            continuar = false;
        }

    } while (continuar);

    return 0;
}

int CrearNumero() {
    int num_aleatorio;
    srand(time(NULL));

    num_aleatorio = rand() % 100;

    return num_aleatorio;
}