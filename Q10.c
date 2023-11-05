#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    
    int Numero1, Numero2;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &Numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &Numero2);

    printf("Digite a operação + ou - : ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            printf("Resultado: %d\n", Numero1 + Numero2);
            break;
        case '-':
            printf("Resultado: %d\n", Numero1 - Numero2);
            break;
        default:
            printf("Operação inválida \n");
            break;
    }

    return 0;
}