#include <stdio.h>
int main() {
    float N;
    int i, R;
    printf("Ingrese un numero positivo: ");
    scanf("%f", &N);
    if (N > 0) {
        i = 1;
        while (i * i <= N) {
            i = i + 1;
        }
        R = i - 1;
        printf("La raiz cuadrada entera es: %d\n", R);
    } else {
        printf("Ingrese un numero positivo\n");
    }
    return 0;
}
