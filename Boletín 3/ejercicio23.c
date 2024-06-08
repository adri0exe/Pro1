#include <stdio.h>

int pedirnota(){
    int n;
    do {
        printf("Introduce una nota entre 0 y 100:");
        scanf("%d",&n);
        printf("\n");
    } while(n<0||n>100);

    return n;
}

char media(const int *nota){
    int sum=0;
    for (int i = 0; i <4 ; ++i) {
        sum=sum+nota[i];
    }
    int total=sum/4;
    if(total>90){
        return 'A';
    }else if(total>80){
        return 'B';
    }else if(total>70){
        return 'C';
    }else if (total>60){
        return 'D';
    }else {
        return 'E';
    }
}

int main() {
    int nota[4];
    for (int i = 0; i <4 ; ++i) {
        nota[i]=pedirnota();
    }
    char letra=media(nota);
    printf("La media de las notas es una %c",letra);
}

