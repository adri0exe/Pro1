#include <stdio.h>

int MesSiguiente(int mes) {
    if (mes == 12) {
        return 12-11;
    } else return mes+1;
}

int main() {
    int mes;

    printf("Introduce un numero de mes: ");
    scanf("%d", &mes);
    printf("El siguiente mes a %d es %d", mes, MesSiguiente(mes));

    return 0;
}
