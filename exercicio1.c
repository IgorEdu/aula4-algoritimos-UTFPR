/*
1. Fazer um programa para ler a primeira letra do estado civil de uma pessoa (S - solteiro, C -
casado, V- viúvo, D- divorciado, E - desquitado) e mostrar uma mensagem com a descrição.
Considere letras maiúsculas e minúsculas. Mostre mensagem de erro, se necessário.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

char ESTADO_CIVIL;

printf("Escolha a opcao");
printf("\n\tS - solteiro, \n\tC - casado, \n\tV- viúvo, \n\tD- divorciado\n");
scanf("%c", &ESTADO_CIVIL);
switch(toupper(ESTADO_CIVIL)){
case 'S':
    printf("Solteiro\n");
    break;
case 'C':
    printf("Casado\n");
    break;
case 'V':
    printf("Viúvo\n");
    break;
case 'D':
    printf("Divorciado\n");
    break;
default:
    printf("Opção invalida\n");
}



return 0;
}
