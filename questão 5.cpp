#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[] = "Hello";
    size_t tamanho = strlen(palavra);
    for(int i = 0; i < tamanho / 2; i++) {
       char tmp = palavra[i]; //armazena o character inicial
       palavra[i] = palavra[tamanho - i - 1]; //Troca o character da ponta oposta
       palavra[tamanho - i - 1] = tmp; //Armazena o character inicial na palavra
    }
    printf("%s", palavra);
}
