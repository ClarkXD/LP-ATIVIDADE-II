#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    
    int codigo_acesso = 1212;
    int tentativa;

    while (1) {
        printf("Digite o código de acesso: ");
        scanf("%d", &tentativa);

        if (tentativa == codigo_acesso) {
            printf("Acesso permitido! \n");
            break;
        } else {
            printf("Código incorreto. \n");
        }
    }

    return 0;
    }