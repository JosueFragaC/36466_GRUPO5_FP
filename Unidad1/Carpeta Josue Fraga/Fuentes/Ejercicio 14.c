#include <stdio.h>
int main() {
    int a, b, r;
    printf("Ingrese el primer entero positivo: ");
    scanf("%d", &a);
    printf("Ingrese el segundo entero positivo: ");
    scanf("%d", &b);
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("El MCD es %d\n", a);
    return 0;
}
