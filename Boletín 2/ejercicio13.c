#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("\nIntroduce la longitud del primer lado del triangulo (cm): ");
    scanf("%d", &lado1);
    printf("\nIntroduce la longitud del segundo lado del triangulo (cm): ");
    scanf("%d", &lado2);
    printf("\nIntroduce la longitud del segundo lado del triangulo (cm): ");
    scanf("%d", &lado3);

    if (lado1 == lado2 && lado1 == lado3) {
        printf("El triangulo es EQUILATERO (lado1=lado2=lado3=%d cm)", lado1);
    } else if (lado1 != lado2 && lado1 == lado3) {
        printf("El triángulo es ISOSCELES (lado1=lado3=%d cm)", lado1);
    } else if (lado1 == lado2 && lado1 != lado3) {
        printf("El triángulo es ISOSCELES (lado1=lado2=%d cm)", lado1);
    } else if (lado2 == lado3) {
        printf("El triángulo es ISOSCELES (lado1=lado3=%d cm)", lado1);
    } else printf("El triangulo es ESCALENO");

    return 0;
}
