#include <stdio.h>

int main() {
    int tiempo, h, m, s;
    //ENTRADA
    printf("Introduce el tiempo en segundos: ");
    scanf("%d", &tiempo);

    //PROCESO
    h = tiempo / 3600;
    m = (tiempo / 60) - (h * 60);
    s = tiempo - (h * 3600) - (m * 60);

    //SALIDA
    printf("%d segundos son %d h : %d m : %d s", tiempo, h, m, s);

    return 0;
}
