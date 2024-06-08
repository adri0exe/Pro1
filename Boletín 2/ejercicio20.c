#include <stdio.h>

int main() {
    char nombre;
    int peso, altura_cm;
    float imc, altura_m;

    printf("Introduzca usted su nombre: ");
    scanf("%s", &nombre);
    printf("Introduzca altura en centimetros: ");
    scanf("%d", &altura_cm);

    altura_m = altura_cm / 100;

    printf("Introduzca peso en kilos: ");
    scanf("%d", peso);

    imc = peso / (altura_m * altura_m);

    if (imc < 18.5) {
        printf("%s, segun el indice de masa corporal (IMC = %.2f), tiene usted un PESO POR DEBAJO DE LO NORMAL, para su estatura", nombre, imc);
    } else if (imc >= 18.5 && imc < 25) {
        printf("%s, segun el indice de masa corporal (IMC = %.2f), tiene usted un PESO NORMAL, para su estatura", nombre, imc);
    } else if (imc >= 25 && imc < 27) {
        printf("%s, segun el indice de masa corporal (IMC = %.2f), tiene usted SOBREPESO DE GRADO I, para su estatura", nombre, imc);
    } else if (imc >= 27 && imc < 30) {
        printf("%s, segun el indice de masa corporal (IMC = %.2f), tiene usted un SOBREPESO DE GRADO II, para su estatura", nombre, imc);
    } else if (imc >= 30) {
        printf("%s, segun el indice de masa corporal (IMC = %.2f), tiene usted OBESIDAD, para su estatura");
    } else printf("Valores incorrectos");

    return 0;
}
