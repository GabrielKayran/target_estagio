function inverterString(str) {
  let novaString = '';

  for (let i = str.length - 1; i >= 0; i--) {
    novaString += str[i];
  }

  return novaString;
}

let string = prompt("Digite uma string: ");
let stringInvertida = inverterString(string);

console.log("String invertida: " + stringInvertida);