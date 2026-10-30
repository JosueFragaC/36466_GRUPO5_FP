#include <stdio.h>

int main() {
    int secreto = 42; // Numero fijo para la practica
    int intento;
    int intentos = 0;

    printf("Adivina el numero (entre 1 y 100):\n");

    do {
        scanf("%d", &intento);
        intentos++;

        if (intento < secreto) {
            printf("Mas alto\n");
        } else if (intento > secreto) {
            printf("Mas bajo\n");
        } else {
            printf("¡Acertaste!\n");
        }
    } while (intento != secreto);

    printf("Has necesitado %d intentos.\n", intentos);

    return 0;
}
