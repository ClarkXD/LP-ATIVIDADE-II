#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int verificaprimo(int numero) {
    if (numero < 2) {
        return 0;
    }
    for (int i = 2; i <= numero/2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

  setlocale(LC_ALL, "portuguese");
  
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    switch (verificaprimo(numero)) {
        case 1:
            printf("Número primo\n");
            break;
        default:
            printf("Número não primo\n");
            break;
    }

    return 0;
}