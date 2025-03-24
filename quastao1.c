#include <stdio.h>

int main() {
    int numero[10], maior,menor, i;

    // inserir os números
    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }

    // maior e menor na lista
    maior = numero[0];
    menor = numero[0];
    
    for (i = 1; i < 10; i++) {
        if (numero[i] > maior) {
            maior = numero[i];
        }
        if (numero[i] < menor) {
            menor = numero[i];
        }
    }

    // resultado
    printf("O maior numero e %d e o menor numero e %d.\n", maior, menor);

    return 0;
}
