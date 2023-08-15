#include <stdio.h>
#include <stdlib.h>

int main() {
  int inteiro;
  int inteiro2;
  int soma;
  int subtracao;
  int multiplicacao;
  int divisao;
  int resto;

  printf("Digite o primeiro número inteiro\n");
  scanf("%d", &inteiro);

  printf("Digite o segundo número inteiro\n");
  scanf("%d", &inteiro2);

  soma = inteiro + inteiro2;

  subtracao = inteiro - inteiro2;

  multiplicacao = inteiro * inteiro2;

  divisao = inteiro / inteiro2;

  resto = inteiro % inteiro2;

  printf("A soma dos números inteiros e: %d no quantitativo\n", soma);
  printf("A subtração dos é: %d\n", subtracao);
  printf("A multiplicacao dos inteiros e: %d\n", multiplicacao);
  printf("A divisao dos inteiros e: %d", divisao);
  printf("O resto da divisao e: %d\n", resto);

  return 0;
}
