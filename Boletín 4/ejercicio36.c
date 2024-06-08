#include <stdio.h>

#define MAX 3
#define FACTORIAL 10

typedef struct {
    int num;
    int factorial[FACTORIAL];
    int numFactores;
} numero;

void CrearArray(numero *datos);
int PedirNum();
void Factorial(numero *datos);
void DescomposicionFactorial(int numero, int *factores, int *numFactores);

int main() {
    numero datos[MAX];

    printf("------ DESCOMPOSICION FACTORIAL ------");

    CrearArray(datos);

    for (int i = 0; i < MAX; i++) {
        printf("\nNumero %d: %d\nDescomposicion factorial: ", i + 1, datos[i].num);

        for (int j = 0; j < datos[i].numFactores; j++) {
            printf("%d", datos[i].factorial[j]);
            if (j < datos[i].numFactores - 1) {
                printf(" * ");
            }
        }

        printf("\n");
    }

    return 0;
}

void CrearArray(numero *datos) {
    for (int i = 0; i < MAX; i++) {
        datos[i].num = PedirNum();
        Factorial(&datos[i]);
    }
}

int PedirNum() {
    int num;

    do {
        printf("\nIntroduce un numero positivo: ");
        scanf("%d", &num);
    } while (num <= 0);

    return num;
}

void DescomposicionFactorial(int numero, int *factores, int *numFactores) {
    *numFactores = 0;

    for (int i = 2; i <= numero; i++) {
        while (numero % i == 0) {
            factores[*numFactores] = i;
            (*numFactores)++;

            numero = numero / i;
        }
    }
}

void Factorial(numero *datos) {
    DescomposicionFactorial(datos->num, datos->factorial, &datos->numFactores);
}
