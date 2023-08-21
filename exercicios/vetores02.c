#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// #include <conio.h> //Para usar a função getch(), precisamos chamar oficialmente essa biblioteca (mas pode funcionar sem).

int main () {
    setlocale(LC_ALL, "");

    int matricula[5];
    float nota1[5];
    float nota2[5];
    float maior1, menor1, maior2, menor2;
    int i;

    for(i = 0; i <= 4; i++) {
        printf("Digite a matrícula do %dº aluno(a) ", i+1);
        scanf("%d", &matricula[i]);
        printf("A variável i está assim: %d", i);
        printf("Digite a nota da primeira avaliação do %dº aluno(a) ", i+1);
        scanf("%f", &nota1[i]);
        printf("Digite a nota da segunda avaliação do %dº aluno(a) ", i+1);
        scanf("%f", &nota2[i]);
        printf("\n");

        if(i == 0) {
            maior1 = nota1[0];
            maior2 = nota2[0];
            menor1 = nota1[0];
            menor2 = nota2[0];
        }

        if(i >= 1) {
            if (nota1[i] > maior1){
                maior1 = nota1[i];
            }
            if (nota2[i] > maior2){
                maior2 = nota2[i];
            }
            if (nota1[i] < menor1){
                menor1 = nota1[i];
            }
            if (nota2[i] < menor2){
                menor2 = nota2[i];
            }
        }
    }

    for(i = 0; i <= 4; i++) {
        printf("\nO(A) aluno(a) de matrícula %d tirou %.1f na primeira avaliação e %.1f na segunda avaliação.", matricula[i], nota1[i], nota2[i]);
    }
    
    printf("\n");
    printf("\nA maior nota registrada na primeira avaliação foi %.1f", maior1);
    printf("\nA menor nota registrada na primeira avaliação foi %.1f", menor1);
    printf("\nA maior nota registrada na segunda avaliação foi %.1f", maior2);
    printf("\nA menor nota registrada na segunda avaliação foi %.1f", menor2);
    // getch();

}