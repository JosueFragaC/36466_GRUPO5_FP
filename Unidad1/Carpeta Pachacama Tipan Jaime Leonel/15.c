#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Introduce el primer numero positivo (a): ");
    scanf("%d", &a);
    printf("Introduce el segundo numero positivo (b): ");
    scanf("%d", &b);

    if (a > 0 && b > 0) {
        int original_a = a;
        int original_b = b;

        // Algoritmo de Euclides
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }

        printf("El MCD de %d y %d es: %d\n", original_a, original_b, a);
    } else {
        printf("Ambos numeros deben ser enteros positivos.\n");
    }

    return 0;
}
