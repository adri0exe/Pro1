#include <stdio.h>
/*
 * Salario anual bruto de una personay muestre por pantalla distintas condiciones
 */

int main() {
    float sueldo_anual_bruto, hijos_menores_18anos, reduccion_irpf, reduccion_hijos_a_cargo, porcentaje_reduccion_hijos_a_cargo, total_anual_a_pagar;
    float IRPF = 0.15;

    printf("Introduzca su salario anual bruto (en euros): ");
    scanf("%f", &sueldo_anual_bruto);
    printf("Introduzca el numero de hijos menores de 18 años a su cargo: ");
    scanf("%f", &hijos_menores_18anos);

    if (hijos_menores_18anos >= 0 && hijos_menores_18anos <= 5) {
        porcentaje_reduccion_hijos_a_cargo = hijos_menores_18anos * 0.1;
    } else if (hijos_menores_18anos < 0) {
        printf("Valor de hijos no valido");
    } else if (hijos_menores_18anos > 5) {
        porcentaje_reduccion_hijos_a_cargo = 0.5;
    }

    reduccion_irpf = sueldo_anual_bruto * IRPF;

    reduccion_hijos_a_cargo = reduccion_irpf * porcentaje_reduccion_hijos_a_cargo;

    printf("\nIRPF (15%): %.2f euros", reduccion_irpf);
    printf("\nReduccion debida a hijos a cargo: %.2f euros", reduccion_hijos_a_cargo);
    printf("\nTotal anual a pagar: %.2f euros", reduccion_irpf - reduccion_hijos_a_cargo);

    return 0;
}
