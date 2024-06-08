#include <stdio.h>

void espacioblanco(int n) {
    for (int i=0; i<n; ++i) {
        printf("\n");
    }
}

int main() {
    int n;
    printf("Introduzca numero de espacios en blanco: ");
    scanf("%d", &n);
    espacioblanco(n);
    return 0;
}
