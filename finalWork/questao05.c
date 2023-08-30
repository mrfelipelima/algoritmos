#include <stdio.h>
#include <stdlib.h>

int main() {
    int matricula[20], frequencia[20], aprovados = 0, repFreq = 0, alunos = 20;
    float media[20], nota1[20], nota2[20], menorMedia, maiorMedia, porcentagemRepFreq;
    
    system("clear");

    for (int i = 0; i < alunos; i++) {
        printf("Sistema de registro acadêmico");
        printf("\nDigite a matrícula do %dº aluno: ", i + 1);
        scanf("%d", &matricula[i]);
        printf("Digite a 1º nota do %dº aluno: ", i + 1);
        scanf("%f", &nota1[i]);
        printf("Digite a 2ª nota do %dº aluno: ", i + 1);
        scanf("%f", &nota2[i]);
        printf("Digite a frequência do %dº aluno (em horas): ", i + 1);
        scanf("%d", &frequencia[i]);
        system("clear");
    }

    system("clear");
    printf("************ RESULTADOS ************\n");

    for (int i = 0; i < alunos; i++) {
        media[i] = (float) (nota1[i] + nota2[i]) / 2;
        if (media[i] >= 7) {
            if (frequencia[i] < 45) {
                printf("Matrícula: %d; media: %.2f; resultado: REPROVADO POR FALTA\n", matricula[i], media[i]);
                repFreq++;
            } else {
                printf("Matrícula: %d; media: %.2f; resultado: APROVADO\n", matricula[i], media[i]);
                aprovados ++;
            }
        }
        if ((media[i] < 7) && (frequencia[i] >= 45)) {
            printf("Matrícula: %d; media: %.2f; resultado: REPROVADO POR MÉDIA\n", matricula[i], media[i]);
        }   
        if ((media[i] < 7) && (frequencia[i] < 45)) {
            printf("Matrícula: %d; media: %.2f; resultado: REPROVADO POR FALTA E MÉDIA\n", matricula[i], media[i]);
            repFreq++;
        }    
    }

    menorMedia = media[0];
    maiorMedia = media[0];

    for (int i = 0; i < alunos; i++) {
        if (media[i] < menorMedia) {
            menorMedia = media[i];
        }
        if (media[i] > maiorMedia) {
            maiorMedia = media[i];
        }
    }
    
    porcentagemRepFreq = (float) repFreq / alunos * 100;
    
    printf("\n*********** ESTATÍSTICAS ***********");
    printf("\nO número total de alunos aprovados: %d", aprovados);
    printf("\nA menor média da turma foi: %.2f", menorMedia);
    printf("\nA maior média da turma foi: %.2f", maiorMedia);
    printf("\nA porcentagem de alunos reprovados por frequência foi de: %.2f\n", porcentagemRepFreq);

}