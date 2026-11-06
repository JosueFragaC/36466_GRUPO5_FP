#include <stdio.h>
int main() {
    int n, d, suma;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);
    suma = 0;
    for (d = 1; d < n; d++) {
        if (n % d == 0) {
            suma = suma + d;
        }
    }
    if (suma == n) {
        printf("El numero es perfecto\n");
    } else {
        printf("El numero no es perfecto\n");
    }
    return 0;
}
