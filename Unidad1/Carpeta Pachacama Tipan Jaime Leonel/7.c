#include <stdio.h>

int main() {
    int N, i = 1, R;

    printf("Introduce un numero N positivo: ");
    scanf("%d", &N);

    if (N >= 0) {
        // Itera mientras i al cuadrado sea menor o igual a N
        while (i * i <= N) {
            i++;
        }

        // La aproximación por defecto es el valor anterior de i
        R = i - 1;

        printf("La raiz cuadrada entera por defecto de %d es: %d\n", N, R);
    } else {
        printf("El numero debe ser positivo o cero.\n");
    }

    return 0;
}
