#include <stdio.h>
#include <math.h>

int main() {
    float x, resultado;

    printf("Ingrese numero: ");
    scanf("%f", &x);

    resultado = pow(fabs(x), 3);

    printf("El resultado es %.2f\n", resultado);

    return 0;
}

