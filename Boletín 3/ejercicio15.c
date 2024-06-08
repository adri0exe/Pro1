#include <stdio.h>

void EsVocal(char letra) {
    if(letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e'
       || letra == 'i' || letra == 'o' || letra == 'u')
        printf("Vocal");
    else printf("No es vocal");
}

int main() {
    int letra;

    printf("Introduce una letra: ");
    scanf("%c", &letra);
    EsVocal(letra);

    return 0;
}
