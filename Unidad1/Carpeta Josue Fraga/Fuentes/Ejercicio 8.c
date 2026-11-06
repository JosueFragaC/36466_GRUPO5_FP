#include <stdio.h>
int main() {
    int N, i;
    int primo;
    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &N);
    primo = 1;
    i = 2;
    while (i < N && primo == 1) {
        if (N % i == 0) {
            primo = 0;
        } else {
            i = i + 1;
        }
    }
    if (primo == 1) {
        printf("El %d es primo\n", N);
    } else {
        printf("El %d no es primo\n", N);
    }
    return 0;
}
