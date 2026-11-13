#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

// Declaración de funciones (prototipos)
void dibujarCuadrado(int lado);
int fibonacci(int n);

int main() {
    int op, n, i;

    do {
        printf("MENU\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");

        // Bucle para validar que la opción sea correcta (como en la imagen)
        do {
            printf("Elija una opcion: ");
            scanf("%d", &op);

            if (op < 1 || op > 3) {
                printf("Error. Opcion no valida, intente de nuevo por favor.\n");
            }
        } while (op < 1 || op > 3);

        switch (op) {
            case 1:
                printf("\nIngrese el lado del cuadrado por favor: ");
                scanf("%d", &n);
                dibujarCuadrado(n);
                printf("\n------------------------------\n");
                break;

            case 2:
                printf("\nIngrese cuantos numeros de la serie desea ver: ");
                scanf("%d", &n);
                printf("La serie es: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", fibonacci(i));
                }
                printf("\n\n------------------------------\n");
                break;

            case 3:
                printf("\nSaliendo del programa...\n");
                break;
        }

    } while (op != 3);

    return 0;
}

// Función para dibujar el cuadrado relleno de asteriscos
void dibujarCuadrado(int lado) {
    int fil, col;
    for (fil = 1; fil <= lado; fil++) {
        for (col = 1; col <= lado; col++) {
            printf("*");
        }
        printf("\n");
    }
}

// Función recursiva para calcular la serie de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
