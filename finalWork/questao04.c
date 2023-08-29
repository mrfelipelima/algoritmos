#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int votosA = 0, votosB = 0, votosC = 0, brancos = 0, nulos = 0, voto = -1, votosTotais = 0;
    float porcentagemA, porcentagemB, porcentagemC;

    system("clear");

    while (voto != 0) {

        printf("Sistema de votação");
        printf("\nEm qual candidato você deseja votar? Digite a opção abaixo:");
        printf("\n1 - Candidato A; 2 - Candidato B; 3 - Candidato C; 4 - Votar em Branco; 5 - Anular voto; 0 - Encerrar Programa;\n");
        scanf("%d", &voto);

        if(voto == 1) {
            votosA++;
            votosTotais++;
            system("clear");
        } 
        
        if(voto == 2) {
            votosB++;
            votosTotais++;
            system("clear");
        }
        
        if(voto == 3) {
            votosC++;
            votosTotais++;
            system("clear");
        }
        
        if(voto == 4) {
            brancos++;
            votosTotais++;
            system("clear");
        }
        
        if(voto == 5) {
            nulos++;
            votosTotais++;
            system("clear");
        }

        if(voto > 5) {
            system("clear");
            printf("\nOpção inválida! tente novamente.\n");
        }
    }

    porcentagemA = (float) votosA / votosTotais * 100;
    porcentagemB = (float) votosB / votosTotais * 100;
    porcentagemC = (float) votosC / votosTotais * 100;

    system("clear");

    printf("\nSistema de votação");
    printf("\n***** RESULTADOS *****");
    printf("\n\tTotal de votos no candidato A: %d", votosA);
    printf("\n\t porcentagem de votos no candidato A: %.2f", porcentagemA);
    printf("\n\tTotal de votos no candidato B: %d", votosB);
    printf("\n\t porcentagem de votos no candidato B: %.2f", porcentagemB);
    printf("\n\tTotal de votos no candidato C: %d", votosC);
    printf("\n\t porcentagem de votos no candidato C: %.2f", porcentagemC);
    printf("\n**********************");
    printf("\nVotos Brancos %d", brancos);
    printf("\nVotos Nulos %d", nulos);
    printf("\nVotos Totais %d\n", votosTotais);
    
}