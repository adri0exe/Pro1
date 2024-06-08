#include <stdio.h>

int main() {
    float ptotal, pcorrectas, resultado, resultado_en_porcentaje;

    printf("Introduce la cantidad de preguntas planteadas: ");
    scanf("%f", &ptotal);
    printf("Introduce la cantidad de preguntas contestadas correctamente: ");
    scanf("%f", &pcorrectas);

    resultado = pcorrectas / ptotal;
    resultado_en_porcentaje = resultado * 100;

    if (resultado >= 0.9) {
        printf("\nNivel maximo, has acertado el %.0f por ciento de las preguntas", resultado_en_porcentaje);
    } else if (resultado >= 0.75 && resultado <=0.9) {
        printf("\nNivel medio, has acertado el %.0f por ciento de las preguntas", resultado_en_porcentaje);
    } else if (resultado >= 0.5 && resultado <= 0.75) {
        printf("\nNivel regular, has acertado el %.0f por ciento de las preguntas", resultado_en_porcentaje);
    } else if (resultado < 0.5) {
        printf("\nFuera de nivel, has acertado el %.0f por ciento de las preguntas", resultado_en_porcentaje);
    }
    return 0;
}
