/*5. Desenvolva um programa para fazer a conversão de Real para Dólar e vice e versa. Para isso o
usuário deverá informar o valor em uma moeda a cotação e fazer a sua conversão. Apresente o
valor convertido.*/

#include <stdio.h>
#include <stdlib.h>


int main () {

int OPCAO;
float QNT_REAL, COT_DOLAR, QNT_DOLAR;

printf("Escolha a opcao para fazer a conversao: \n");
printf("\t 1 - Real para Dolar\n");
printf("\t 2 - Dolar para real\n");
printf("OPCAO: ");
scanf("%d", &OPCAO);

switch(OPCAO){
case 1:
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &COT_DOLAR);
    printf("Digite a quantidade em reais: ");
    scanf("%f", &QNT_REAL);
    QNT_DOLAR = (QNT_REAL * COT_DOLAR);
    printf("O valor convertido para dolar eh: %.2f", QNT_DOLAR);
    break;
case 2:
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &COT_DOLAR);
    printf("Digite a quantidade em dolares: ");
    scanf("%f", &QNT_DOLAR);
    QNT_REAL = (QNT_DOLAR / COT_DOLAR);
    printf("O valor convertido para real eh: %.2f", QNT_REAL);
    break;
default:
    printf("Opcao invalida!\n");
}

return 0;
}
