#include <stdio.h>
int main() {
    int n, mayor, segundo, contador;
    mayor = 0;
    segundo = 0;
    contador = 0;
    printf("Ingrese numero positivo (0 para terminar): ");
    scanf("%d", &n);
    while (n != 0) {
        contador = contador + 1;
        if (n > mayor) {
            segundo = mayor;
            mayor = n;
        } else {
            if (n < mayor && n > segundo) {
                segundo = n;
            }
        }
        printf("Ingrese otro numero (0 para terminar): ");
        scanf("%d", &n);
    }
    if (contador < 2) {
        printf("Hay menos de 2 valores ingresados\n");
    } else {
        if (segundo == 0) {
            printf("El mayor es %d\n", mayor);
            printf("No existe un segundo mayor distinto\n");
        } else {
            printf("El mayor es %d\n", mayor);
            printf("El segundo mayor es %d\n", segundo);
        }
    }
    return 0;
}
