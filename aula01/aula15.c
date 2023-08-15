#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
    int num1;
    int num2;

    printf("Entre com dois números inteiros e eu lhe direi\n");
    printf("as relações que eles satisfazem: \n");
    printf("=================================\n");
    scanf("%d%d", &num1, &num2);

    if(num1 == num2) {
        printf("%d é igual a %d\n", num1, num2);
    }

    if(num1 != num2) {
        printf("%d não é igual a %d\n", num1, num2);

        if(num1 > num2) {
            printf("%d é maior que %d\n", num1, num2);
        }

        if(num1 < num2) {
            printf("%d é menor que %d\n", num1, num2);
        }
    }

    return 0;
}