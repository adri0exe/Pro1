#include <stdio.h>
typedef struct {
    char nombre[50];
    int edad;
    float altura;
} Persona;

struct part {
    int numero;
    char nombre[24];
    int disponibles;
};

void imprimirPersona(Persona p) {
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad+5);
    printf("Altura: %.2f metros\n", p.altura+0.10);
}

int main() {
    Persona persona1 = {"Lucas", 30, 1.75};
    Persona persona2;
    /*struct part part1, part2; part1.numero=13; printf("Edad de persona1 : %d\n", part1.numero);*/

    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad de persona1 : %d\n", persona1.edad);
    printf("Altura: %.2f metros\n", persona1.altura);

    //Modificamos los datos del registro
    persona1.edad = 80;
    printf("Edad después de asignarle otra: %d\n", persona1.edad);

    // Asignación entre registros, sólo si son compatibles, es decir, tienen el mismo tipo.
    persona2=persona1;
    printf("Edad de persona2: %d\n", persona2.edad);

    // Imprimir persona2 a pasándole el registro como argumento a una función
    imprimirPersona(persona2);

    return 0;
}