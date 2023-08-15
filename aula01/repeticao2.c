#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int numero, linha, restante;

    printf("Digite um número\n");
    scanf("%d", &numero);

    linha = numero - (numero - 1);
    restante = 1;

    int i, j;

    for(i = 1; i <= numero; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
    }

    printf("\n");

    return 0;
}