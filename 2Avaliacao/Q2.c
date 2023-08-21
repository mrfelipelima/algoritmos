#include <stdio.h>

int main() {

    // Declaração de variáveis
    int idade, somaIdades = 0, escolaridade, totalDeNivelSuperior = 0, opiniao, pessoas, avaliacoesPositivas = 0, idade50FilmeBom = 0;
    float mediaDeIdade, percentualDeNivelSuperior;

    // Questiona a idade para iniciar o laço de repetição

    printf("Pesquisa de satisfação de filme\n");
    printf("Digite a sua idade: \n");
    scanf("%d", idade);
    somaIdades = idade;

    // Laço de repetição

    while (idade != 0)
    {
        printf("Qual a sua escolaridade?\n");
        printf("Digite: 1 - Ensino Fundamental, 2 - Ensino Médio, 3 - Ensino Superior\n");
        scanf("%d", escolaridade);
        if (escolaridade == 3)
        {
            totalDeNivelSuperior++;
        }
        printf("Qual a sua opinião sobre o filme?\n");
        printf("Digite: 1 - Péssimo, 2 - Ruim, 3 - Regular, 4 - Bom, 5 - Excelente\n");
        scanf("%d", opiniao);

        // Acrescenta +1 no total de pessoas
        pessoas++;

        // Soma o total de idades
        somaIdades = somaIdades + idade;

        // Verifica se a avaliação foi positiva
        if (opiniao > 3)
        {
            avaliacoesPositivas++;
        }

        // Se a pessoa possuir mais de 50 anos e deu uma avaliação boa ou excelente adiciona +1 no contador
        if (idade > 50)
        {
            if (opiniao >4)
            {
                idade50FilmeBom++;
            }
        }

        printf("Pesquisa de satisfação de filme\n");
        printf("Digite a sua idade: \n");
        scanf("%d", idade);
    }

    if (pessoas != 0)
    {
        // Calcula o percentual de pessoas com nível superior    
        percentualDeNivelSuperior = (float) (totalDeNivelSuperior/pessoas)*100;
        
        // Imprime os resultados na tela
        printf("********* RESULTADOS *********");
        printf("\n\tQuantidade de pessoas entrevistadas: %d", pessoas);
        printf("\n\tMédia de idade dos entrevistados: %d", mediaDeIdade);
        printf("\n\tQuantidade de pessoas que NÃO considerou o filme ruim ou péssimo: %d", avaliacoesPositivas);
        printf("\n\tPercentual de pessoas com nível superior: %d", percentualDeNivelSuperior);
        printf("\n\tPessoas com mais de 50 anos que consideraram o filme Bom ou Excelente: %d", idade50FilmeBom);
    } else {
        printf("\n********* NENHUM ENTREVISTADO *********");
    }

    return 0;
}
