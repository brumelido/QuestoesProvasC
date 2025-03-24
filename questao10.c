#include <stdio.h>

int main() {
    int n, i, j, factorial, sum = 0;

    printf("Digite um número inteiro N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = 1;

        for (j = 1; j <= i; j++) {
            factorial *= j;
        }

        sum += factorial;
    }

    printf("A soma dos fatoriais de 1 até %d é %d.\n", n, sum);

    return 0;
}
