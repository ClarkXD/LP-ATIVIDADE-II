#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    
    int Numero1;
    int Numero2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &Numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &Numero2);

    if (Numero1 > Numero2) {
        printf("%d é o maior e %d é o menor. \n", Numero1, Numero2);
    } else if (Numero2 > Numero1) {
        printf("%d é o maior e %d é o menor. \n", Numero2, Numero1);
    } else {
        printf("Os números são iguais. \n");
    }



    return 0;
}