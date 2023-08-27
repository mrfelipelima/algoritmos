#include <stdio.h>

int main() {
    int valor, valorMaiorQue200 = 0, valorMenorQue200 = 0, counter = 0;

    while (counter < 30) {
        printf("Digite um valor: \n");
        scanf("%d", &valor);

        if (valor > 200) {
            valorMaiorQue200++;
        }

        if (valor <= 200) {
            valorMenorQue200++;
        }
        
        counter++;
    }

    printf("\nResultados:");
    printf("\n\tQuantidade de valores menores ou igual a 200: %d", valorMenorQue200);
    printf("\n\tQuantidade de valores maiores que 200: %d\n", valorMaiorQue200);

    return 0;
}