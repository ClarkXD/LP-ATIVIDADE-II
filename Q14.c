#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int numero;
    int somapares = 0;
    int  somaimpares = 0;
    int totalpares = 0;
    int totalimpares = 0;

    while (1) {
        printf("Digite um número inteiro (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            somapares += numero;
            totalpares++;
        } else {
            somaimpares += numero;
            totalimpares++;
        }
    }

    if (totalpares > 0) {
        printf("Quantidade de números pares: %d\n", totalpares);
        printf("Média dos números pares: %.2f\n", (float)somapares / totalpares);
    } else {
        printf("Nenhum número par foi inserido.\n");
    }

    if (totalimpares > 0) {
        printf("Quantidade de números ímpares: %d\n", totalimpares);
        printf("Média dos números ímpares: %.2f\n", (float)somaimpares / totalimpares);
    } else {
        printf("Nenhum número ímpar foi inserido.\n");
    }

    return 0;
}