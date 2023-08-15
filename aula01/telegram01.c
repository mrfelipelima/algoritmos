#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1; /*Primeiro número do usuário a ser lido*/
    int num2; /*Segundo número do usuário a ser lido*/

    printf("Entre com dois números inteiros e eu lhe direi\n");
    printf("as relações que eles satisfazem:\n");

    scanf("%d%d", &num1, &num2); /*Lê dois inteiros*/

    if (num1 == num2)
    {
        printf("%d é igual a %d\n", num1, num2);
    } /*Fim do if*/

    if (num1 != num2)
    {
        printf("%d não é igual a %d\n", num1, num2);
    } /*Fim do if*/

    if (num1 < num2)
    {
        printf("%d é menor do que %d\n", num1, num2);
    } /*Fim do if*/

    if (num1 > num2)
    {
        printf("%d é maior do que %d\n", num1, num2);
    } /*Fim do if*/

    if (num1 <= num2)
    {
        printf("%d é menor ou igual a %d\n", num1, num2);
    } /*Fim do if*/

    if (num1 >= num2)
    {
        printf("%d é maior ou igual a %d\n", num1, num2);
    } /*Fim do if*/

    system("pause"); // Quem usa Linux não precisa!
    return 0;        /*Indica que o programa foi concluído com sucesso*/
} /*Indica que o programa foi concluído com sucesso*/