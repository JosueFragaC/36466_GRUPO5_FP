#include <stdio.h>

int main() {
    int n, i;
    int es_primo = 1; // Usamos 1 como Verdadero y 0 como Falso

    printf("Introduce un numero entero mayor que 1: ");
    scanf("%d", &n);

    if (n > 1) {
        // Comprobamos si es divisible por algún número entre 2 y n-1
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                es_primo = 0; // Encontramos un divisor, no es primo
                break;        // Salimos del bucle anticipadamente
            }
        }

        // Mostramos el resultado según el valor de la bandera
        if (es_primo) {
            printf("%d es un numero primo.\n", n);
        } else {
            printf("%d no es un numero primo.\n", n);
        }
    } else {
        printf("El numero debe ser mayor que 1.\n");
    }

    return 0;
}
