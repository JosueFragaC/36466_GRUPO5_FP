#include <stdio.h>

int main() {
    int n, i;
    // Usamos long long ya que los factoriales crecen muy rápido
    long long resultado = 1;

    printf("Introduce un numero entero n >= 0: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: El factorial no esta definido para numeros negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            resultado *= i; // Multiplicador acumulativo
        }

        printf("El factorial de %d es: %lld\n", n, resultado);
    }

    return 0;
}
