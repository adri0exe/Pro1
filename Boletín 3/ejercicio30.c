#include <stdio.h>

int suma(int n){
    if (n < 10) {
        return n;
    } else {
        return n % 10 + suma( (n-(n%10)) /10 );
    }
}

int main() {
    int num, total;

    printf("Introduzca un numero:");
    scanf("%d", &num);

    total = suma(num);

    printf("%d", total);

    return 0;
}
