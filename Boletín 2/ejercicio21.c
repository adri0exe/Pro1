#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, nota5, nota6, media, media_presentados;

    printf("Introduzca calificacion asignatura 1 (formato X.X, 0 para No Presentado): \n");
    scanf("%f", &nota1);
    printf("Introduzca calificacion asignatura 2 (formato X.X, 0 para No Presentado): \n");
    scanf("%f", &nota2);
    printf("Introduzca calificacion asignatura 3 (formato X.X, 0 para No Presentado): \n");
    scanf("%f", &nota3);
    printf("Introduzca calificacion asignatura 4 (formato X.X, 0 para No Presentado): \n");
    scanf("%f", &nota4);
    printf("Introduzca calificacion asignatura 5 (formato X.X, 0 para No Presentado): \n");
    scanf("%f", &nota5);
    printf("Introduzca calificacion asignatura 6 (formato X.X, 0 para No Presentado): \n");
    scanf("%f", &nota6);

    media = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6;

    if (media <= 10 && media >= 0) {
        if (media >= 9) {
            printf("Nota media: SOBRESALIENTE (%.2f)", media);
        } else if (media < 9 && media >= 7) {
            printf("Nota media: NOTABLE (%.2f)", media);
        } else if (media < 7 && media >= 5) {
            printf("Nota media: APROBADO (%.2f)", media);
        } else if (media >= 0 && media < 5) {
            printf("Nota media: SUSPENSO (%.2f)", media);
        }
    } else printf("Valores incorrectos");



    return 0;
}
