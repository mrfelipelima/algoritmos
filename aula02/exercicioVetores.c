// Crie um programa que leia a as idades de 1000
// a) Média de idade das pessoas
// b) Quantidade de idosos

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menuFaixaIdade();

int main() {
    int idade, idosos, contador, somaIdade;
    float mediaIdade;

    somaIdade = 0;
    idosos = 0;
    contador = 0;

    menuFaixaIdade();  

    printf("Digite a sua idade (digite '-1' para sair): ");
    scanf("%d", &idade);

    while (idade != -1)
    {
        somaIdade = somaIdade + idade;
        if(idade >= 60) {
            idosos = idosos + 1;
        }
        menuFaixaIdade();
        printf("Digite a sua idade (digite '-1' para sair): ");
        scanf("%d", &idade);
        contador = contador + 1;
    }
    mediaIdade = (float) somaIdade / contador;

    printf("\nA quantidade de idosos entrevistados é de: %d", idosos);
    printf("\nA média de idade de todos os entrevistados é de: %.1f\n", mediaIdade);

    return 0;
}

void menuFaixaIdade(void) {
    printf("*************************\n");
    printf("Qual a sua idade?\n");
    return;
}