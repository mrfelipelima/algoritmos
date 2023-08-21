#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 
 
int main() 
{ 
    setlocale(LC_ALL,""); 
 
    int idade = 1, escolaridade, contSuperior = 0, opiniao, somaIdade = 0, qntdTotal = 0, qntdExcBomReg = 0, qntdBomExcIdaMaiorq50 = 0; 
    float mediaIdade, percNivelSuperior; 
 
    while(idade != 0) { 
        printf("\nDigite a sua idade: "); 
        scanf("%d", &idade); 
        somaIdade = somaIdade + idade; 
 
        if(idade != 0) { 
 
            printf("\nDigite sua escolaridade: \n\t1-Fundamental\n\t2-Médio\n\t3-Superior\n"); 
            scanf("%d", &escolaridade); 
            if(escolaridade == 3) { 
                contSuperior++; 
            } 
 
            printf("\nDigite sua opinião sobre o filme: \n\t5-Excelente\n\t4-Bom\n\t3-Regular\n\t2-Ruim\n\t1-Péssimo\n"); 
            scanf("%d", &opiniao); 
            if((opiniao == 5) || (opiniao == 3)){ 
                qntdExcBomReg++; 
            } 
 
            if(((opiniao == 5) || (opiniao == 4)) && (idade > 50)) { 
                qntdBomExcIdaMaiorq50++; 
            } 
 
            qntdTotal++; 
        } 
 
    } 
 
    mediaIdade = (float) somaIdade / qntdTotal; 
    percNivelSuperior = (float)contSuperior / qntdTotal * 100; 
 
    printf("\nA quantidade total de pessoas entrevistadas é: %d", qntdTotal); 
    printf("\nA média da idade das pessoas entrevistadas é: %.2f", mediaIdade); 
    printf("\nA quantidade de pessoas que não considerou o filme ruim ou pior é: %d", qntdExcBomReg); 
    printf("\nO percentual de pessoas com escolaridade nivel superior é: %.2f%%", percNivelSuperior); 
    printf("\nA quantidade de pessoas que considerou o filme bom ou excelente e tem mais de 50 anos é: %d", qntdBomExcIdaMaiorq50); 
 
    printf("\n"); 
    return 0; 
}