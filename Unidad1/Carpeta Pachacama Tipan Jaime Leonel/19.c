#include <stdio.h>

int main() {
    int n;
    int mayor = 0, segundo = 0;
    int contador = 0;

    printf("Introduce numeros enteros positivos (0 para terminar):\n");
    scanf("%d", &n);

    while (n != 0) {
        if (n > 0) {
            contador++;
            if (contador == 1) {
                mayor = n;
            } else {
                if (n > mayor) {
                    segundo = mayor;
                    mayor = n;
                } else if (n > segundo && n != mayor) {
                    segundo = n;
                }
            }
        }
        scanf("%d", &n);
    }

    if (contador < 2) {
        printf("Error: Se ingresaron menos de dos valores validos.\n");
    } else {
        printf("El mayor es: %d\n", mayor);
        printf("El segundo mayor es: %d\n", segundo);
    }

    return 0;
}
