#include <stdio.h>

void floyd(int n) {
    int i, c, a = 1;

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

    printf("Introduzca el numero donde parar:");
    scanf("%d", &n);
    floyd(n);

    return 0;
}
