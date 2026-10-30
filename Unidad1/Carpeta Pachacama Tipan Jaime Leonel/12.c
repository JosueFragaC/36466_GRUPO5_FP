#include <stdio.h>

int main() {
    int n, suma = 0, digito;

    printf("Introduce un numero entero positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        int original = n; // Guardamos el número para mostrarlo al final si se desea

        while (n > 0) {
            digito = n % 10;     // Obtiene el último dígito
            suma += digito;      // Acumula la suma
            n /= 10;             // Elimina el último dígito (división entera)
        }

        printf("La suma de los digitos de %d es: %d\n", original, suma);
    } else {
        printf("El numero debe ser un entero positivo.\n");
    }

    return 0;
}
