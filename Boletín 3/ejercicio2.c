#include <stdio.h>

void dias_semana(char inicial) {
    switch (inicial) {
        case 'l':
        case 'L':
            printf("Lunes");
            break;
        case 'm':
        case 'M':
            printf("Martes");
            break;
        case 'x':
        case 'X':
            printf("Miercoles");
            break;
        case 'j':
        case 'J':
            printf("Jueves");
            break;
        case 'c':
        case 'V':
            printf("Viernes");
            break;
        case 's':
        case 'S':
            printf("Sabado");
            break;
        case 'd':
        case 'D':
            printf("Domingo");
            break;
    }
}

int main() {
    char inicial;
    printf("Introduzca la inicial de un dia de la semana:");
    scanf("%c", &inicial);
    dias_semana(inicial);
    return 0;
}
