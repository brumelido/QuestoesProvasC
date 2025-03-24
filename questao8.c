// 8. Faça um programa que leia um número inteiro N e imprima os N primeiros
// números da sequência de Fibonacci.
#include <stdio.h>

int main() {
    int n, i;
    long long int fib1 = 0, fib2 = 1, fib3;

    printf("Digite um número inteiro N: ");
    scanf("%d", &n);

    printf("Os primeiros %d números da sequência de Fibonacci são:\n", n);

    if (n >= 1) {
        printf("%lld ", fib1);
    }

    if (n >= 2) {
        printf("%lld ", fib2);
    }

    for (i = 3; i <= n; i++) {
        fib3 = fib1 + fib2;
        printf("%lld ", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return 0;
}
