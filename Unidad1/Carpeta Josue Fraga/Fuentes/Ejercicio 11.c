#include <stdio.h>
int main() {
    int n, i, anterior, actual, siguiente;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Error: n debe ser mayor o igual a 1\n");
    } else {
        anterior = 0;
        actual = 1;
        i = 1;
        while (i <= n) {
            printf("%d\n", anterior);
            siguiente = anterior + actual;
            anterior = actual;
            actual = siguiente;
            i = i + 1;
        }
    }
    return 0;
}
