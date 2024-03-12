#include <stdio.h>
#include <stdlib.h>

int main() {
  int indice = 13;
  int soma = 0;
  int k = 0;

  for (k = 0; k < indice; k++) {
    soma = soma + k;
  }

  printf("%d", soma);
  return 0;
}