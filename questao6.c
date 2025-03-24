#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("resultado: ");

    for (i = 1; i <= numero; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
