#include <stdio.h>
#include <math.h>

float polinomio(int x) {
    float total = (3* pow(x, 5)) + (2* pow(x, 4)) - (5* pow(x, 3)) - (pow(x, 2)) + (7*x) - 6;
    return total;
}

int main() {
    int x;

    printf("Introduce un numero para resolver el polinomio: ");
    scanf("%d", &x);

    printf("El resultado es: %.2f", polinomio(x));

    return 0;
}
