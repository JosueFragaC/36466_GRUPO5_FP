//Taller elaborado por: Josue Fraga
//programa pasar imprimir un cuadrado
#include <stdio.h>
int main ()
{
    int i,j,n; //n controla el tamaño del cuadrdo
    do
    {
        printf("lineas del cuadrado");
        scanf("%d", &n);
    }while(n<=0);
    for(i=1; i<=n; i++) //filas i
    {
        for(j=1; j<=n; j++) // columnas j
            {
            printf(" * ");
            }
        printf ("\n");
    }
    return 0;
}
