#include <stdio.h>
#define MAXIMA_LONGITUD 50

int main() {
    char nombre[15];
    char apellidos[25];
    char calle[30];
    int num_portal;
    int num_piso;
    char letra_piso[2];
    int codigo_postal;
    char ciudad[20];

    printf("---------------------------------------------------------------------------\n");
    printf("|                                                                         |\n"
           "|                                                                         |\n"
           "|                                                                         |\n"
           "|                                                                         |\n"
           "|                                                                         |\n"
           "|                                                                         |\n"
           "|                                                                         |\n"
           "|                                                                         |\n"
           "|                                                                         |\n"
           "|                                                                         |\n"
           "|                                                                         |\n");
    printf("---------------------------------------------------------------------------\n");

    //ENTRADA
    printf("Nombre: ");
    scanf(" %15[^\n]", nombre);
    scanf("%*[^\n]%*c");

    printf("Apellidos: ");
    scanf(" %25[^\n]", apellidos);
    scanf("%*[^\n]%*c");

    printf("Calle: ");
    scanf(" %30[^\n]", calle);
    scanf("%*[^\n]%*c");

    printf("Numero del portal: ");
    scanf("%d", &num_portal);

    printf("Numero del piso: ");
    scanf("%d", &num_piso);

    printf("Letra del piso: ");
    scanf(" %2[^\n]", letra_piso);
    scanf("%*[^\n]%*c");

    printf("Codigo postal: ");
    scanf("%d", &codigo_postal);

    printf("Ciudad: ");
    scanf(" %[^\n]", ciudad);
    scanf("%*[^\n]%*c");


    //SLAIDA

    printf("---------------------------------------------------------------------------\n");
    printf("|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|\n|");




    return 0;
}
