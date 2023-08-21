#include <stdio.h>

int main() {
    // declarando variáveis
    int quantidade = 50;
    int valores[quantidade], count, soma, menorValor, maiorValor;
    float media;

    // recebe os valores dos usuários
    for (count = 0; count < quantidade; count++)
    {
        printf("Informe o %dº valor: \n", count+1);
        scanf("%d", &valores[count]);

        //soma os valores
        soma = soma + valores[count];
    }

    // media dos valores    
    media = (float) soma / quantidade;

    // verifica o menor valor

    menorValor = valores[0];
    maiorValor = valores[0];

    for (count = 0; count < quantidade; count++)
    {
        if (valores[count] < menorValor)
        {
            menorValor = valores[count];
        }
        if (valores[count] > maiorValor)
        {
            maiorValor = valores[count];
        }
    }

    // imprime os dados
    printf("\nA soma dos valores é: %d", soma);
    printf("\nA média dos valores é: %.2f", media);
    printf("\nO menor valor é: %d", menorValor);
    printf("\nO maior valor é: %d\n", maiorValor);
}
