#include <stdio.h>

int main() {
    int n, i;
    // Usamos long long porque los números de Fibonacci crecen muy rápido
    long long a = 0, b = 1, c;

    printf("Introduce un numero entero n >= 1: ");
    scanf("%d", &n);

    if (n >= 1) {
        printf("Serie de Fibonacci:\n");
        for (i = 1; i <= n; i++) {
            printf("%lld ", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    } else {
        printf("El numero debe ser mayor o igual a 1.\n");
    }

    return 0;
}
