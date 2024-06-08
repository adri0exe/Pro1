#include <stdio.h>

void floyd(int n) {
    int i, c ,a = 1;

    for (i = 1; i <= n; i++) {
        for (c = 1; c <= i; c++) {
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Introduce el numero donde parar (positivo): ");
    scanf("%d", &n);

    if (n > 0) {
        floyd(n);
    } else printf("ERROR NUMERO NEGATIVO");

    return 0;
}
