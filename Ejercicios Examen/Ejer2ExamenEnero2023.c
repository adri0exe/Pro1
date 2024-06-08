#include <stdio.h>
#include <stdbool.h>

#define N 5

typedef char tCad[N + 1];

bool EsPar(const tCad);

int main() {

    return 0;
}

bool EsPar(const tCad cadena) {
    bool aux;
    int n = 0;

    while (cadena[n] != '\0') {
        n++;
        aux = (0 == n%2);
    }

    return aux;
}