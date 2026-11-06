#include <stdio.h>
int main() {
    int N, digito, suma;
    printf("Ingrese un numero positivo: ");
    scanf("%d", &N);
    suma = 0;
    while (N > 0) {
        digito = N % 10;
        suma = suma + digito;
        N = N / 10;
    }
    printf("La suma de digitos es %d\n", suma);
    return 0;
}a
