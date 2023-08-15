#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int contador;
    int nota;
    int total;
    float media;

    total = 0;
    contador = 0;

    printf("Digite a primeira nota ou '-1' para encerrar\n");
    scanf("%d", &nota);

    while (nota != -1)
    {
        total = total + nota;
        contador = contador + 1;
        printf("Digite a primeira nota ou '-1' para encerrar\n");
        scanf("%d", &nota);
    }

    if (contador != 0)
    {
        media = (float) total / contador;
        printf("Média da turma é: %.2f\n", media);
    } else {
        printf("Nenhuma nota foi informada\n");
    }
    
    return 0;
}