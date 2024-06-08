#include <stdio.h>
#include <stdbool.h>

/*
 * OBJETIVO MOSTRAR UN PROGRAMA PATRON DE MENU CONTROLADO
 */

int main() {
    bool continuar = true;
    char letra;
    int op1, op2;
    do {
        // PRESENTAR LAS OPCIONES QUE PERMITE EL PROGRAMA
        puts("\t\tCalculadora aritmetica basica");
        puts("(S)umar");
        puts("R)estar");
        puts("M)ultiplicar");
        puts("D)ividir");
        puts("(F)inalizar");

        //PEDIR LA OPCION ELEGIDA
        printf("Escribe la inicial de la opcion elegida (S,R,M,D y/o F): ");
        scanf(" %c", &letra);

        //ACTIVAR LAS ACCIONES DE LA OPCION ELEGIDA POR EL USUARIO
        switch (letra) {
            case 's':
            case 'S':
                printf("Escriba los sumandos de tipo entero separados por espacios: ");
                scanf("%d%d", &op1, &op2);
                printf("La suma de %d + %d = %d\n", op1, op2, op1+op2);
                break;

            case 'r':
            case 'R':
                printf("Escriba el minuendo y el sustraendo de tipo entero separados por espacios: ");
                scanf("%d%d", &op1, &op2);
                printf("La resta de %d - %d = %d", op1, op2, op1-op2);
                break;

            case 'm':
            case 'M':
                printf("Escriba multiplicando y multiplicador de tipo entero separados por espacios: ");
                scanf("%d%d", &op1, &op2);
                printf("La multiplicacion de %d * %d = %d", op1, op2, op1*op2);
                break;

            case 'd':
            case 'D':
                do {
                    printf("Escriba el divisor de tipo entero distinto de ceros: ");
                    scanf("%d", &op2);
                } while (op2 == 0);
                printf("Escriba el dividendo de tipo entero: ");
                scanf("%d", &op1);
                printf("El cociente de %d / %d es %d\n", op1, op2, op1/op2);
                printf("El resto de la division es %d", op1 % op2);
                break;

            case 'f':
            case 'F': continuar = false;
            puts("Gracias por usar el software, hasta la vista");
            break;
        default:
            puts("Opcion no valida");
        }
        puts("\n\n");

    } while (continuar);
    return 0;
}
