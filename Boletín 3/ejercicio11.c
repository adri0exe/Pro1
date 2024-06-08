#include <stdio.h>

int num(int min, int max) {
    int n = min-1;

    while (n < min || n > max) {
        printf("Introduce un numero entre %d y %d: ", min, max);
        scanf("%d", &n);
    }
    return n;
}

int main() {
    int n;

    n = num(-10, 10);

    printf("El numero introducido es %d", n);
    return 0;
}
