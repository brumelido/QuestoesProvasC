#include <stdio.h>

int main() {
   char nome[50];
   
   printf("NOME: ");
   scanf("%s", nome);
   
   printf("Seu nome tem %d letras:\n", strlen(nome));
   
   for(int i = 0; i < strlen(nome); i++) {
    printf("%c ", nome[i]);
   }
   
   return 0;
}