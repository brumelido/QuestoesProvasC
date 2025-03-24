#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 2; i <= numero * 2; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
