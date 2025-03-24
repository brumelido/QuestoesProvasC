// 9. Faça um programa que leia um número inteiro N e imprima os N primeiros
// números primos.
#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Digite um número inteiro N: ");
    scanf("%d", &n);

    printf("Os primeiros %d números primos são:\n", n);

    for (i = 2, count = 0; count < n; i++) {
        int is_prime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\n");

    return 0;
}