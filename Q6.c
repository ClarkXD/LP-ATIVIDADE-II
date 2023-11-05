#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");

    int codigo;

    printf("Escolha o codigo do produto:\n");
    printf("1 - Camiseta\n");
    printf("2 - Calca\n");
    printf("3 - Sapato\n");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Produto selecionado: Camiseta\n");
            printf("Preco: R$45.90\n");
            break;
        case 2:
            printf("Produto selecionado: Calca\n");
            printf("Preco: R$72.00\n");
            break;
        case 3:
            printf("Produto selecionado: Sapato\n");
            printf("Preco: R$172.00\n");
            break;
        default:
            printf("Codigo invalido!\n");
            break;
    }
