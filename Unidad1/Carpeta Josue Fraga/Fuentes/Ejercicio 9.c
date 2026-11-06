#include <stdio.h>
int main() {
    int A, B, N, i;
    int primo;
    printf("Ingrese 1er numero: ");
    scanf("%d", &A);
    printf("Ingrese 2do numero: ");
    scanf("%d", &B);
    if (A > B) {
        N = A;
        A = B;
        B = N;
    }
    N = A;
    while (N <= B) {
        if (N > 1) {
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
                printf("%d\n", N);
            }
        }
        N = N + 1;
    }
    return 0;
}
