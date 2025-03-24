#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Numero(0 acaba):\n");
    scanf("%d", &numero);

    maior = menor = numero;

    while (numero != 0) {
        scanf("%d", &numero);
        if (numero != 0) {
            if (numero > maior) {
                maior = numero;
            } else if (numero < menor) {
                menor = numero;
            }
        }
    }
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
}