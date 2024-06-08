#include <stdio.h>

int main() {
    char nom[20 + 1] = "adrian"; //El 1 marca el caracter que hay al guardar el char
    int edad = 18;

    //ENTRADA
    printf("Introduzca usted su nombre:");
    gets(nom);
    printf("Introduzca usted su edad:");
    scanf("%d", &edad);

    //SALIDA
    printf("¡Buenos dias %s, tiene usted %d años", nom, edad);

    return 0;
}
