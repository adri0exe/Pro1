#include <stdio.h>

int main() {
    int m1, m2, m3, m4, n1, n2, n3, n4, r1, r2, r3, r4;

    printf("Introduce los componentes de la primera matriz (separados por espacios): ");
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);
    printf("Introduce los componentes de la segunda matriz (separados por espacios):");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    r1 = m1+n1;
    r2 = m2+n2;
    r3 = m3+n3;
    r4 = m4+n4;

    printf("%d\t%d\n", r1, r2);
    printf("%d\t%d\n", r3, r4);

    return 0;
}
