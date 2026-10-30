#include <stdio.h>

int main() {
    // Definición de variables
    float x;

    // Entrada de datos
    printf("Ingrese un numero: ");
    scanf("%f", &x);

    // Proceso y Validación usando el operador lógico && (Y)
    if (x >= 0 && x <= 10) {
        printf("El numero %.2f SI pertenece al intervalo [0, 10].\n", x);
    } else {
        printf("El numero %.2f NO pertenece al intervalo [0, 10].\n", x);
    }

    return 0;
}
