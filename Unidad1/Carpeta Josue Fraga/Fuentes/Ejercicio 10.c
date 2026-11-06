#include <stdio.h>
int main() {
    int n, i, factor;
    printf("Ingrese un numero entero mayor o igual a 0: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: el numero debe ser mayor o igual a 0");
    } else {
        factor = 1;
        i = 1;
        while (i <= n) {
            factor = factor * i;
            i = i + 1;
        }
        printf("El factorial es %d\n", factor);
    }
    return 0;
}
