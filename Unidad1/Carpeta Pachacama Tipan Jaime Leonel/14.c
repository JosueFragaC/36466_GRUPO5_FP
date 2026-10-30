#include <stdio.h>

int main() {
    int n, original, invertido = 0, digito;

    printf("Introduce un numero entero positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        original = n;

        // Construimos el número invertido
        while (n > 0) {
            digito = n % 10;
            invertido = invertido * 10 + digito;
            n /= 10;
        }

        // Comparamos el original con el invertido
        if (original == invertido) {
            printf("%d es un numero capicua.\n", original);
        } else {
            printf("%d no es un numero capicua.\n", original);
        }
    } else {
        printf("El numero debe ser un entero positivo.\n");
    }

    return 0;
}
