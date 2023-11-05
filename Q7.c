#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");

    
    int opcoes;

    printf("Bem-vindo ao Jogo!\n");
    printf("1 - Novo Jogo\n");
    printf("2 - Carregar Jogo\n");
    printf("3 - Configuracoes\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcoes);

    switch (opcoes) {
        case 1:
            printf("Iniciando novo jogo. \n");
            break;
        case 2:
            printf("Carregando jogo existente. \n");
            break;
        case 3:
            printf("Abrindo configuracoes. \n");
            break;
        default:
            printf("Opcao invalida! \n");
            break;
    }


    return 0;
}