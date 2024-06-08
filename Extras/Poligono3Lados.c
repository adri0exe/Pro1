#include <stdio.h>

int main() {
    int num1, num2, num3;


    //ENTRADA
    printf("Introduce 3 numeros enteros/lados del triangulo: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //PROCESO
    if (num1 > 0 && num2 > 0 && num3 > 0);
        if ((num1 + num2) >= num3 && (num1 + num3) >= num2 && (num2 + num3) >= num1) printf("Numeros validos \n");
            else printf("Numeros no validos");

    if (num1 == num2 == num3) printf("Equilatero");
        else if(num1 == num2 || num2 == num3 || num1 == num3) printf("Isosceles");

    return 0;
}