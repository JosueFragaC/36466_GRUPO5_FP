#include <stdio.h>
#include <math.h> // Necesario para la función de valor absoluto (fabs)

int main() {
    // Definición de variables
    float x, valorAbsoluto, resultado;

    // Entrada de datos
    printf("Ingrese un numero:\n");
    scanf("%f", &x);

    // Proceso:
    // 1. Obtener el valor absoluto de x
    valorAbsoluto = fabs(x);

    // 2. Elevarlo al cubo (|x|^3)
    resultado = valorAbsoluto * valorAbsoluto * valorAbsoluto;

    // Salida de datos
    printf("El valor absoluto al cubo es: %.2f\n", resultado);

    return 0;
}
