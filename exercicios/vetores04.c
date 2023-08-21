/*
*   Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A – Azul, P- Preto, V- Verde e C- Castanho)
*   e a cor dos cabelos (P – Preto, C- Castanho, L – Louro e R-Ruivo)
*   de 20 pessoas e que calcule e mostre:
*
*   A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos;
*   A média das idades das pessoas com altura inferior a 1,50;
*   A porcentagem de pessoas com olhos azuis entre as pessoas analisadas;
*   A quantidade de pessoas ruivas que não possuem olhos azuis;
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade[20], cont = 0, i, maisDe50Peso60 = 0, pessoasComMenosDe150 = 0, ruivasSemOlhoAzul = 0;
    float peso[20], altura[20], mediaDeIdade, porcentagemDeOlhosAzuis;
    char corDosCabelos[20], corDosOlhos[20];

    for (i = 0; i < count; i++)
    {
        printf("Digite a idade da %dª pessoa: \n", i+1);
        scanf("%d", idade[i]);

        printf("Digite o peso da %dª pessoa: \n", i+1);
        scanf("%.2f", peso[i]);

        if ((idade > 50) && (peso < 60))
        {
            maisDe50Peso60++;
        }
        

        printf("Digite a altura da %dª pessoa: \n", i+1);
        scanf("%.2f", altura[i]);

        printf("Digite a opção de cor dos olhos da %dª pessoa: \n", i+1);
        printf("A – Azul, P - Preto, V - Verde e C - Castanho\n");
        scanf("%d", corDosOlhos[i]);

        printf("Digite a opção de cor dos cabelos da %dª pessoa: \n", i+1);
        printf("P – Preto, C - Castanho, L – Louro e R - Ruivo\n");
        scanf("%d", corDosCabelos[i]);
    }
    
}