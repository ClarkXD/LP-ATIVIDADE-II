#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float numero;

    printf("Esta quantos graus: ");
    scanf("%f", &numero);

    system("cls || clear");

    if (numero > 25){
        printf("ensolarado \n");    
        }
        else if (numero < 15){
            printf("chuvoso \n");
        } else {
            printf("Nublado \n");
        }
        
    

    return 0;
}