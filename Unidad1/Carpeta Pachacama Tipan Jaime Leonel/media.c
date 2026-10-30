#include <stdio.h>

int main() {
    // Definición de variables
    float num1, num2, media;

    // Entrada de datos
    printf("Ingrese el primer numero:\n");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero:\n");
    scanf("%f", &num2);

    // Proceso
    media = (num1 + num2) / 2;

    // Salida de datos
    printf("La media aritmetica es: %.2f\n", media);

    return 0;
}
