#include <stdio.h>
#include <stdlib.h>

// FUNCION PARA VECTORES
void vector() {
    int vectores[1000]; // Crea un arreglo que puede almacenar 1000 números enteros.
    int i, n;

    printf("\nINGRESO DE VECTOR\n");

    printf("Cuantos numeros desea ingresar: ");// Solicita al usuario cuántos números desea ingresar.
    scanf("%d", &n);

    //Valida que la cantidad esté entre 1 y 1000.
    while(n <= 0 || n > 1000) {
        printf("Error. Ingrese una cantidad entre 1 y 1000: ");
        scanf("%d", &n);
    }

    //Este ciclo se repite n veces para llenar el vector.
    for(i = 0; i < n; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &vectores[i]);

        // Mientras el número sea menor o igual a cero, se repite el ciclo.
        while(vectores[i] <= 0) {
            printf("Error: No puede ingresar 0 ni numeros negativos.\n");
            printf("Ingrese nuevamente un numero positivo: ");
            scanf("%d", &vectores[i]);
        }
    }

    printf("[ ");// Imprime el corchete de apertura del vector.

    // Recorre todas las posiciones del vector desde 0 hasta n-1.
    for(i = 0; i < n; i++) {
        printf("%d ", vectores[i]); // Imprime cada número almacenado en el vector
    }

    printf("]\n"); // Imprime el corchete de cierre y realiza un salto de línea.
}

// FUNCION PARA MATRICES
void matriz() {
    int i, j, filas, columnas;

    //
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    //
    float numeros[filas][columnas];

    printf("\nINGRESO DE MATRIZ\n");

    for(i = 0; i < filas; i++) {
        for(j = 0; j < columnas; j++) {
            printf("Ingrese el numero [%d][%d]: ", i, j);
            scanf("%f", &numeros[i][j]); //

            while(numeros[i][j] <= 0) {
                printf("Error. Ingrese un numero positivo: ");
                scanf("%f", &numeros[i][j]);
            }
        }
    }

    printf("\nMatriz ingresada:\n");

    for(i = 0; i < filas; i++) {
        for(j = 0; j < columnas; j++) {

            printf("%g\t", numeros[i][j]);
        }
        printf("\n");
    }
}

// FUNCION PRINCIPAL Y MENU
int main() {
    int opcion = 0;

    while(opcion != 3) {

        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1. Ingresar e imprimir vector\n");
        printf("2. Ingresar e imprimir matriz\n");
        printf("3. Salir\n");

        printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        if(opcion == 1) {
            vector();
        }
        else if(opcion == 2) {
            matriz();
        }
        else if(opcion == 3) {
            printf("\nSaliendo del programa...\n");
        }
        else {
            printf("\nOpcion incorrecta. Intente nuevamente.\n");
        }
    }

    return 0;
}
