#include <stdio.h>
int main() {
    int n, residuo, binario, potencia;
    printf("Ingrese un numero positivo: ");
    scanf("%d", &n);
    binario = 0;
    potencia = 1;
    while (n > 0) {
        residuo = n % 2;
        binario = binario + residuo * potencia;
        potencia = potencia * 10;
        n = n / 2;
    }
    printf("El binario es %d\n", binario);
    return 0;
}
