#include <stdio.h>

int pertenceFibonacci(int numero) {
  int anterior = 0;
  int atual = 1;

  while (atual <= numero) {
    if (atual == numero) {
      return 1;
    }
    int proximo = anterior + atual;
    anterior = atual;
    atual = proximo;
  }
  return 0;
}

int main() {
  int numero;
  printf("Informe um número para verificar se pertence à sequência de "
         "Fibonacci: ");
  scanf("%d", &numero);

  if (pertenceFibonacci(numero)) {
    printf("%d pertence à sequência de Fibonacci.\n", numero);
  } else {
    printf("%d não pertence à sequência de Fibonacci.\n", numero);
  }

  return 0;
}