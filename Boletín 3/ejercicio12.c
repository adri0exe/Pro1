#include <stdio.h>

int suma(int n) {
    int total = 0;

    for (int i = 1; i <= n; i++) {
        total = total + i;
    }
    return total;
}

int main() {
    int num;

    printf("Introduce un numero:");
    scanf("%d", &num);

    printf("La suma es %d", suma(num));
    return 0;
}
