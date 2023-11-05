#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

   
    int opcoes;
    double valor, resultado;

    while (1) {
        printf("\nEscolha a opção de conversão:\n");
        printf("1. Quilômetros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcoes);

        if (opcoes == 0) {
            break;
        }

        switch (opcoes) {
            case 1:
                printf("Digite a quantidade de quilômetros: ");
                scanf("%lf", &valor);
                resultado = valor * 0.621371;
                printf("%.2lf quilômetros é igual a %.2lf milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%lf", &valor);
                resultado = (valor * 9/5) + 32;
                printf("%.2lf graus Celsius é igual a %.2lf graus Fahrenheit. \n", valor, resultado);
                break;
            default:
                printf("inválida \n");
                break;
        }
    }

    return 0;
}