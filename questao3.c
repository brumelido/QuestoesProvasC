#include <stdio.h>

int main() {
    int n, i, resultado;

    // inteiro n
    printf("numero inteiro n: ");
    scanf("%d", &n);

    // tabuada
    for (i = 1; i <= 10; i++) {
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }

    return 0;
}