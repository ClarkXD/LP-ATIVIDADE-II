#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");

    int escolhaidioma;

    printf("Escolha Seu idioma de preferencia:\n");
    printf("1 - Ingles\n");
    printf("2 - Espanhol\n");
    printf("3 - Frances\n");
    scanf("%d", &escolhaidioma);

    switch (escolhaidioma)
    {
    case 1:
        printf("Welcome! \n");
        break;
    case 2:
        printf("Bienvenido! \n");
        break;
    case 3:
        printf("Bienvenue! \n");
    default:
    printf("Invalido!");
        break;
    }
    
    return 0;
}