#include <stdio.h>

int main() {
    int idade, somaIdade = 0, pessoasComMaisDe90 = 0, counter = 0, pessoas = 40;
    float peso, mediaIdade;

    while (counter < pessoas) {
        printf("\nDigite a sua idade: \n");
        scanf("%d", &idade);

        somaIdade = somaIdade + idade;

        printf("Digite o seu peso: \n");
        scanf("%f", &peso);

        if (peso > 90) {
            pessoasComMaisDe90++;
        }
        
        counter++;
    }

    mediaIdade = somaIdade / pessoas;

    printf("\nResultados:");
    printf("\n\tQuantidade de pessoas com mais de 90kg: %d", pessoasComMaisDe90);
    printf("\n\tMédia de idade das %d pessoas: %.2f\n", pessoas, mediaIdade);
    
}