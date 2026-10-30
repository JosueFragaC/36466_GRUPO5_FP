#include <stdio.h>

int main() {
    int n1, n2, inicio, fin, temp;
    int num, divisor, es_primo;

    printf("Introduce el primer numero: ");
    scanf("%d", &n1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &n2);

    // Ordenar para saber cuál es el menor y cuál el mayor (sin usar for)
    if (n1 > n2) {
        inicio = n2;
        fin = n1;
    } else {
        inicio = n1;
        fin = n2;
    }

    printf("\nNumeros primos comprendidos entre %d y %d:\n", inicio, fin);

    // Bucle principal para recorrer el rango de números
    num = inicio;
    while (num <= fin) {
        if (num > 1) {
            es_primo = 1; // Asumimos que es primo inicialmente
            divisor = 2;

            // Bucle interno para comprobar si tiene divisores (reemplaza al for)
            while (divisor < num) {
                if (num % divisor == 0) {
                    es_primo = 0; // Encontró divisor, no es primo
                    break;        // Salimos del bucle interno
                }
                divisor++;
            }

            // Si la bandera sigue en 1, es primo y lo imprimimos
            if (es_primo == 1) {
                printf("%d ", num);
            }
        }
        num++;
    }

    printf("\n");

    return 0;
}
