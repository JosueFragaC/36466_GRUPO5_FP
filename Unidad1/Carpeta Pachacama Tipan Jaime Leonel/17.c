#include <stdio.h>

int main() {
    int n, original;
    long long binario = 0;
    long long posicion = 1;
    int resto;

    printf("Introduce un numero entero positivo: ");
    scanf("%d", &n);

    if (n >= 0) {
        original = n;

        if (n == 0) {
            binario = 0;
        } else {
            while (n > 0) {
                resto = n % 2;
                binario += resto * posicion;
                posicion *= 10;
                n /= 2;
            }
        }

        printf("El numero %d en binario es: %lld\n", original, binario);
    } else {
        printf("El numero debe ser un entero positivo.\n");
    }

    return 0;
}
