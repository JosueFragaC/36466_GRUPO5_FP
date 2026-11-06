#include <stdio.h>
int main() {
    int c, dias, horas, minutos, segundos;
    printf("Ingrese la cantidad de segundos: ");
    scanf("%d", &c);
    dias = c / 86400;
    c = c % 86400;
    horas = c / 3600;
    c = c % 3600;
    minutos = c / 60;
    segundos = c % 60;
    printf("Dias: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
    return 0;
}
