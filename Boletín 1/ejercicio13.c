#include <stdio.h>

int main() {
    float radio1, radio2, radio3, perimetro1, perimetro2, perimetro3, area1, area2, area3, pi;
    pi = 3.14159;


    printf("Ingrese el radio de tres circunferencias (separados por espacios): ");
    scanf("%f %f %f", &radio1, &radio2, &radio3);

    perimetro1 = pi * radio1;
    area1 = pi * (radio1 * radio1);
    perimetro2 = pi * radio2;
    area2 = pi * (radio2 * radio2);
    perimetro3 = pi * radio3;
    area3 = pi * (radio3 * radio3);

    printf("RADIO\t\tPERIMETRO\tAREA\n");
    printf("=====\t\t=========\t====\n");
    printf("%.2f\t\t%.2f\t\t%.2f\n", radio1, perimetro1, area1);
    printf("%.2f\t\t%.2f\t\t%.2f\n", radio2, perimetro2, area2);
    printf("%.2f\t\t%.2f\t\t%.2f\n", radio3, perimetro3, area3);
    return 0;
}
