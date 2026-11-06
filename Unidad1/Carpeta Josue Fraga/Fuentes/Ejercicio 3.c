#include <stdio.h>

int main() {
    int x, yy;

    printf("Ingrese el primer numero: ");
    scanf("%d", &x);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &yy);

    if (yy == 0) {
        printf("No se puede dividir para cero");
    } else {
        if (x % yy == 0) {
            printf("El primer numero es divisible por el segundo");
        } else {
            printf("Los numeros no son divisibles");
        }
    }

    return 0;
}
