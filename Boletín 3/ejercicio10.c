#include <stdio.h>

char signo(int num) {
    if (num>0) {
        return 'P';
    } else return 'N';
}

int main() {
    int num;

    printf("Introduce un numero: ");
    scanf("%d", &num);
    printf("El numero es %c", signo(num));

    return 0;
}
