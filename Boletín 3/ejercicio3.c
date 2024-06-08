#include <stdio.h>

void divisores(int n) {
    int i=1;
    while (n%i==0) {
        if (n%i==0)
            i++;
    }
    printf("%d es divisor \n", i-1);
}

int main() {
    int num;
    printf("Introduzca un numero: ");
    scanf("%d", &num);
    divisores(num);
    return 0;
}
