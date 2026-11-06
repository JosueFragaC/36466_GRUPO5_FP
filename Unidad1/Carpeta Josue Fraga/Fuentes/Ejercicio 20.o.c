#include <stdio.h>
int main() {
    int secreto, intento, cont;
    secreto = 50;
    cont = 0;
    printf("Adivina el numero entre 1 y 100: ");
    scanf("%d", &intento);
    while (intento != secreto) {
        cont = cont + 1;
        if (intento < secreto) {
            printf("Mas alto\n");
        } else {
            printf("Mas bajo\n");
        }
        scanf("%d", &intento);
    }
    cont = cont + 1;
    printf("Acertaste\n");
    printf("Intentos realizados: %d\n", cont);
    return 0;
}
