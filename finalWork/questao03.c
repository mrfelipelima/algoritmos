#include <stdio.h>

int main() {
    int valores[50], count = 50, menorValor, maiorValor;

    for (int i = 0; i < count; i++) {
        printf("Escreva um valor: \n");
        scanf("%d", &valores[i]);
    }
    
    printf("Os valores na ordem inserida: \n");

    for (int i = 0; i < count; i++) {
        printf("\t%d", valores[i]);
    }

    printf("\nOs valores na ordem inversa: \n");

    for (int i = count - 1; i >= 0; i--) {
        printf("\t%d", valores[i]);
    }

    menorValor = valores[0];
    maiorValor = valores[0];

    for (int i = 0; i < count; i++) {
        if (menorValor > valores[i]) {
            menorValor = valores[i];
        }

        if (maiorValor < valores[i]) {
            maiorValor = valores[i];
        }
    }
    

    printf("\nO menor valor inserido foi: %d", menorValor);
    printf("\nO maior valor inserido foi: %d\n", maiorValor);
    
}