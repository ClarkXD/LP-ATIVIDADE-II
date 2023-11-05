#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int maim(){

setlocale(LC_ALL, "portuguese");

     float nota;

    printf("Digite Sua Nota: ");
    scanf("%f", &nota);

    
    if (nota >= 9) {
        printf("Nota Excelente\n");
    } else if (nota >= 7 && nota < 9) {
        printf("Nota Bom\n" );
    } else if (nota >= 5 && nota < 7) {
        printf("Nota Razoável\n");
    } else {
        printf("Nota Insuficiente\n");
    }

 
    return 0;
}