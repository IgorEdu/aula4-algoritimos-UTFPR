/*
1. Fazer um programa para ler a primeira letra do estado civil de uma pessoa (S - solteiro, C -
casado, V- vi�vo, D- divorciado, E - desquitado) e mostrar uma mensagem com a descri��o.
Considere letras mai�sculas e min�sculas. Mostre mensagem de erro, se necess�rio.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

char ESTADO_CIVIL;

printf("Escolha a opcao");
printf("\n\tS - solteiro, \n\tC - casado, \n\tV- vi�vo, \n\tD- divorciado\n");
scanf("%c", &ESTADO_CIVIL);
switch(toupper(ESTADO_CIVIL)){
case 'S':
    printf("Solteiro\n");
    break;
case 'C':
    printf("Casado\n");
    break;
case 'V':
    printf("Vi�vo\n");
    break;
case 'D':
    printf("Divorciado\n");
    break;
default:
    printf("Op��o invalida\n");
}



return 0;
}
