#include <stdio.h>
int main() {
    int N, original, digito, invertido;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);
    original = N;
    invertido = 0;
    while (N > 0) {
        digito = N % 10;
        invertido = invertido * 10 + digito;
        N = N / 10;
    }
    if (original == invertido) {
        printf("El numero es capicua\n");
    } else {
        printf("El numero no es capicua\n");
    }
    return 0;
}
