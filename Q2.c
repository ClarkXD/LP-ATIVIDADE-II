#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float Vcompra;
    float valorfinal;
    char Diadasemana;
    float desconto = 0; 

    printf("Qual é o Valor da Compra:");
    scanf("%f", &Vcompra);

    system("cls || clear");

    printf("Digite f ou d para fim de Semana ou dia de Semana: ");
    scanf(" %c", &Diadasemana);

    system("cls || clear");

    if (Vcompra > 100){
        if (Diadasemana == 'f'){ 
            desconto = Vcompra * 0.15;
        } else if (Diadasemana == 'd'){ 
            desconto = Vcompra * 0.1;
        }
    }

    valorfinal = Vcompra - desconto;

    printf("Valor Final da Compra R$%.2f \n", valorfinal);

    return 0;
}