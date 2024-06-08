#include <stdio.h>

int fibonacci(int n){
    int aux,n1,n2,n3;
    if(n==0||n==1){
        return n;
    }else{
        n1=0;
        n2=1;
        printf("%d %d ",n1,n2);
        for (int i = 2; i <=n ; ++i) {
            n3=n2+n1;
            n1=n2;
            n2=n3;
            printf("%d ",n3);
        }
        return n3;
    }
}

int main() {
    int n;
    printf("Introduce el termino hasta el que quieres calcular fibonacci:\n");
    scanf("%d",&n);
    printf("\nEl termino %d de la sucesion de fibonacci es %d",n,fibonacci(n));
}
