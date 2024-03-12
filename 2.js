function pertenceFibonacci(numero) {
  let anterior = 0;
  let atual = 1;

  while (atual <= numero) {
    if (atual === numero) {
      return true;
    }
    let proximo = anterior + atual;
    anterior = atual;
    atual = proximo;
  }
  return false;
}

let numero = parseInt(prompt("Informe um número para verificar se pertence à sequência de Fibonacci: "));

if (pertenceFibonacci(numero)) {
  console.log(numero + " pertence à sequência de Fibonacci.");
} else {
  console.log(numero + " não pertence à sequência de Fibonacci.");
}