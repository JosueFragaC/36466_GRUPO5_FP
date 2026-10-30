#include <stdio.h>

int main() {
    int n, i, j;

    printf("Introduce un numero entero n >= 1: ");
    scanf("%d", &n);

    if (n >= 1) {
        // Ciclo externo: controla las filas
        for (i = 1; i <= n; i++) {
            // Ciclo interno: imprime 'i' asteriscos en la fila actual
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n"); // Salto de línea para pasar a la siguiente fila
        }
    } else {
        printf("El numero debe ser mayor o igual a 1.\n");
    }

    return 0;
}
