#include <stdio.h>

int main() {
    int n, i, soma = 0;

    // inteiro n
    printf("numero inteiro n: ");
    scanf("%d", &n);

    // soma 
    for (i = 1; i <= n; i++) {
        soma += i;
    }

    printf("A soma e: %d\n", n, soma);

    return 0;
}
