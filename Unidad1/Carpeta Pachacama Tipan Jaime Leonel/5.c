#include <stdio.h>

int main() {
    // Definición de variables
    int c, dias, horas, minutos, segundos, resto;

    // Entrada de datos
    printf("Ingrese el numero de segundos: ");
    scanf("%d", &c);

    // Proceso
    // 1. Calcular dias y el resto de segundos
    dias = c / (24 * 60 * 60);
    resto = c % (24 * 60 * 60);

    // 2. Calcular horas a partir del resto y actualizar el resto
    horas = resto / (60 * 60);
    resto = resto % (60 * 60);

    // 3. Calcular minutos y los segundos finales
    minutos = resto / 60;
    segundos = resto % 60;

    // Salida de datos
    printf("%d segundos equivalen a:\n", c);
    printf("%d dias, %d horas, %d minutos y %d segundos.\n", dias, horas, minutos, segundos);

    return 0;
}
