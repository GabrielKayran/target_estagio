#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    int comprimento = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = comprimento - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);
    inverterString(string);

    printf("String invertida: %s\n", string);

    return 0;
}