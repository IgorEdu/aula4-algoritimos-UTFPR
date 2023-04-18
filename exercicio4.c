/*4. Elabore um algoritmo que, apresente um menu, com as seguintes opções:
a. Calcular a média aritmética
b. Calcular a média harmônica
c. Calcular a média geométrica.
Conforme a opção do usuário realize a operação selecionada.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media_aritmetica(){
    int X, Y;
    float RESULTADO;

    printf("\n Para calcular a media aritimetica digite os 2 valores");
    printf("\n Digite o primeiro valor: ");
    scanf("%d", &X);
    printf("\n Digite o segundo valor: ");
    scanf("%d", &Y);

    RESULTADO = (float)(X + Y) / 2;
    return RESULTADO;
}

float media_harmonica(){
    float X, Y,RESULTADO;

    printf("\n Para calcular a media harmonica digite os 2 valores");
    printf("\n Digite o primeiro valor: ");
    scanf("%f", &X);
    printf("\n Digite o segundo valor: ");
    scanf("%f", &Y);

    RESULTADO = 2 / ((1/X) + (1/Y));
    return RESULTADO;
}

float media_geometrica(){
    float X, Y,RESULTADO;

    printf("\n Para calcular a media geometrica digite os 2 valores");
    printf("\n Digite o primeiro valor: ");
    scanf("%f", &X);
    printf("\n Digite o segundo valor: ");
    scanf("%f", &Y);

    RESULTADO = sqrt((X*Y));
    return RESULTADO;
}

int main() {

float X, Y, RESULTADO;
char OPCAO;

printf("Selecione a opcao que deseja calcular: ");
printf("\n\t a - Calcular a media aritmetica");
printf("\n\t b - Calcular a media harmonica");
printf("\n\t c - Calcular a media geometrica");
printf("\n OPCAO: ");
scanf("%c", &OPCAO);
fflush(stdin);

switch(toupper(OPCAO)){
case 'A':
    RESULTADO = media_aritmetica();
    printf("\n O resultado da media aritimetica eh: %.2f", RESULTADO);
    break;
case 'B':
    RESULTADO = media_harmonica();
    printf("\n O resultado da media harmonica eh: %.2f", RESULTADO);
    break;
case 'C':
    RESULTADO = media_geometrica();
    printf("\n O resultado da media geometrica eh: %.2f", RESULTADO);
    break;
default:
    printf("\n Opcao invalida! \n");
}



return 0;
}
