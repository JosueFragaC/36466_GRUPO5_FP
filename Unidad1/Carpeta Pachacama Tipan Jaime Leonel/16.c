#include <stdio.h>

int main() {
    int n, d;
    int suma = 0;

    printf("Introduce un numero entero positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        // Recorremos los posibles divisores desde 1 hasta n - 1
        for (d = 1; d < n; d++) {
            if (n % d == 0) {
                suma += d; // Acumulamos el divisor propio
            }
        }

        // Comparamos la suma con el número original
        if (suma == n) {
            printf("%d es un numero perfecto.\n", n);
        } else {
            printf("%d no es un numero perfecto.\n", n);
        }
    } else {
        printf("El numero debe ser un entero positivo.\n");
    }

    return 0;
}
