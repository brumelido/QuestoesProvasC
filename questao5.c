#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    do {
        printf("numeros terminando com 0: ");
        scanf("%d", &numero);
        if (numero != 0) {
            soma += numero;
            contador++;
        }
    } while (numero != 0);

    float media = (float)soma / contador;
    printf("Soma dos numeros: %d\n", soma);
    printf("Media dos numeros: %.2f\n", media);

    return 0;
}