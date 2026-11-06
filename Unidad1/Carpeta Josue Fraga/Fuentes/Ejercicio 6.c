#include <stdio.h>
int main() {
    int cantidad = 0;
    float promedio, suma = 0, altura, maximo, minimo;
    printf("Ingrese una altura (negativa para terminar): ");
    scanf("%f", &altura);
    while (altura >= 0) {
        suma = suma + altura;
        if (cantidad == 0) {
            maximo = altura;
            minimo = altura;
        } else {
            if (altura > maximo) {
                maximo = altura;
            }
            if (altura < minimo) {
                minimo = altura;
            }
        }
        cantidad = cantidad + 1;
        printf("Ingrese una altura (negativa para terminar): ");
        scanf("%f", &altura);
    }
    if (cantidad > 0) {
        promedio = suma / cantidad;
        printf("La media de las alturas es: %.2f\n", promedio);
        printf("La altura maxima es: %.2f\n", maximo);
        printf("La altura minima es: %.2f\n", minimo);
    } else {
        printf("No se ingresaron alturas validas.\n");
    }
    return 0;
}
