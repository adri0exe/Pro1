#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Introduce tres numeros enteros separados por espacios: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        if (num2 > num3) {
            printf("%d <= %d <= %d", num3, num2, num1);
        } else printf("%d <= %d <= %d", num2, num3, num1);
    } else if (num2 > num1 && num2 > num3) {
        if (num1 > num3) {
            printf("%d <= %d <= %d", num3, num1, num2);
        } else printf("%d <= %d <= %d", num1, num3, num2);
    } else if (num3 > num1 && num3 > num2) {
        if (num1 > num2) {
            printf("%d <= %d <= %d", num2, num1, num3);
        } else printf("%d <= %d <= %d" , num1, num2, num3);
    }
    return 0;
}
