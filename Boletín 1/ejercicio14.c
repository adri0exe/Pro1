#include <stdio.h>

int main() {
    char ciudad [20+1];
    int dia, mes, año;
    float tmax, tmin, tmaxc, tminc;

    printf("Introduzca el nombre de su ciudad: ");
    scanf("%s", &ciudad);
    printf("\nIntroduce la fecha separando por espacios: ");
    scanf("%d %d %d", &dia, &mes, &año);
    printf("\nIntroduzca la temperatura maxima en grados Fahrenheit: ");
    scanf("%f", &tmax);
    printf("\nIntroduzca la temperatura minima en grados Fahrenheit; ");
    scanf("%f", &tmin);

    tmaxc = (tmax - 32) * 5.0/9;
    tminc = (tmin - 32) * 5.0/9;

    printf("-----------------------%s %d/%d/%d-----------------------", ciudad, dia, mes, año);
    printf("\nTMax(ºF) \tTMin(ºF) \tTMax(ºC) \tTMin(ºC)");
    printf("\n%.2fºF \t%.2fºF \t%.2fºF \t%.2fºF \n", tmax, tmin, tmaxc, tminc);
    printf("------------------------------------------------------------");
    return 0;
}
