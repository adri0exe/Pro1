#include <stdio.h>

int main() {
    int num1, num2, num3;
    int menor, mayor, medio;

    //ENTRADA
    printf("Introduce tres numeros separados por espacios: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //PROCESO
    if (num1 < num2)
        if (num2 < num3) printf("El orden es: %d %d %d", num1, num2, num3);
        else if (num1 < num3) printf("El orden es: %d %d %d", num1, num3, num2);
            else printf("El orden es: %d %d %d", num3, num1, num2);
    else if (num3 > num1) printf("%d %d %d", num2, num1, num3);
        else if (num3 > num2) printf("El orden es: %d %d %d", num2, num3, num1);
            else printf("El orden es: %d %d %d", num3, num2, num1);

    return 0;
}
