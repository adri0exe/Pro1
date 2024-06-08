#include <stdio.h>
#include <stdlib.h>

int main() {
    int par_impar, resto;

    printf("Piense un numero del 1 al 10");
    printf("\n¿El numero que ha pensado es impar (1) o par (2): ");
    scanf("%d", &par_impar);
    printf("\n¿Cual es el resto de dividir el numero que ha pensado entre 5?: ");
    scanf("%d", &resto);

    if (par_impar == 1 || par_impar == 2) {
        if (resto > 0 && resto <= 10) {
            if (par_impar == 1) {
                switch (resto) {
                    case 0:
                        printf("El numero que ha pensado es el 5");
                        break;
                    case 1:
                        printf("El numero que ha pensado es el 1");
                        break;
                    case 2:
                        printf("El numero que ha pensado es el 7");
                        break;
                    case 3:
                        printf("El numero que ha pensado es el 3");
                        break;
                    case 4:
                        printf("El numero que ha pensado es el 9");
                        break;
                }
            } else {
                switch (resto) {
                    case 0:
                        printf("El numero que ha pensado es el 10");
                        break;
                    case 1:
                        printf("El numero que ha pensado es el 6");
                        break;
                    case 2:
                        printf("El numero que ha pensado es el 2");
                        break;
                    case 3:
                        printf("El numero que ha pensado es el 8");
                        break;
                    case 4:
                        printf("El numero que ha pensado es el 4");
                        break;
                    default:
                        exit(-1);
                }
            }
        } else printf("Resto fuera de intervalo [1-10]");
    } else printf("Numero fuera de intervalo (1) o (2)");



    return 0;
}
