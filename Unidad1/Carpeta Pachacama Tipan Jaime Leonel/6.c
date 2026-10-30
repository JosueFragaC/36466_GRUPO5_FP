#include <stdio.h>

int main() {
    double h, suma = 0, max_val = 0, min_val = 0;
    int c = 0;

    while (1) {
        printf("Ingrese altura (valor negativo para finalizar): ");
        scanf("%lf", &h);

        // Si el número es negativo, salimos del bucle
        if (h < 0) {
            break;
        }

        // Si es el primer elemento válido, inicializamos máximo y mínimo
        if (c == 0) {
            max_val = h;
            min_val = h;
        } else {
            if (h > max_val) {
                max_val = h;
            }
            if (h < min_val) {
                min_val = h;
            }
        }

        suma += h;
        c++;
    }

    // Verificamos si se ingresaron datos antes de calcular la media
    if (c > 0) {
        double media = suma / c;
        printf("\n----------------------------------------\n");
        printf("Resultados de las alturas introducidas:\n");
        printf("Valor máximo: %.2f\n", max_val);
        printf("Valor mínimo: %.2f\n", min_val);
        printf("Promedio o media: %.2f\n", media);
    } else {
        printf("\nNo se procesaron datos válidos.\n");
    }

    return 0;
}
