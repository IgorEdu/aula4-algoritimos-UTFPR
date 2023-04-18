/*2. Criar um programa para ler o preço e a categoria de um produto. Calcular o reajuste de acordo
com a categoria: se a mesma for A=50%, B=25%, C=15% e outras 5%. Depois mostre o valor
antigo, o percentual de reajuste e o valor reajustado.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    float PRECO_ATUAL, PRECO_REAJUSTADO;
    char CATEGORIA;

    printf("Digite o preco do produto: ");
    scanf("%f", &PRECO_ATUAL);
    fflush(stdin);
    printf("Digite a categoria do produto: ");
    scanf("%c", &CATEGORIA);
    fflush(stdin);

    switch(toupper(CATEGORIA)){
    case 'A':
        PRECO_REAJUSTADO = PRECO_ATUAL * 0.5;
        printf("Preco reajustado em 50%%, o preco antigo era: %.2f e o preco reajustado ficou: %.2f", PRECO_ATUAL, PRECO_REAJUSTADO);
        break;
    case 'B':
        PRECO_REAJUSTADO = PRECO_ATUAL * 0.25;
        printf("Preco reajustado em 25%%, o preco antigo era: %.2f e o preco reajustado ficou: %.2f", PRECO_ATUAL, PRECO_REAJUSTADO);
        break;
    case 'C':
        PRECO_REAJUSTADO = PRECO_ATUAL * 0.15;
        printf("Preco reajustado em 15%%, o preco antigo era: %.2f e o preco reajustado ficou: %.2f", PRECO_ATUAL, PRECO_REAJUSTADO);
        break;
    default:
        PRECO_REAJUSTADO = PRECO_ATUAL * 0.05;
        printf("Preco reajustado em 5%%, o preco antigo era: %.2f e o preco reajustado ficou: %.2f", PRECO_ATUAL, PRECO_REAJUSTADO);
        break;
    }
    return 0;
}
