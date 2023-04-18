/*O numero 3025 possui a seguinte caracteristica: 30 + 25 � igual 55, E 55 ao quadrado � igual a 3025
Fa�a um programa que leia um numero da ordem de milhar (4 digitos) no
intervalo de 1000 a 9999 e verifique se esse numero tem esta caracteristica.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void verificar_todos()
{
    int PARTE1, PARTE2, RESULTADO;
    int i, contador = 0;

    for (i = 1000; i <= 9999; i++)
    {
        PARTE1 = i / 100;
        PARTE2 = (i % 100);

        RESULTADO = ((PARTE1 + PARTE2) * (PARTE1 + PARTE2));
        if (RESULTADO == i)
        {
            printf("O numero %d tambem possui a mesma caracteristica\n", i);
            contador++;
        }
    }
    printf("\n");
    printf("O total de numeros que atendem a caracteristica eh: %d\n", contador);
}

void verificar_unico()
{
    int VALOR, parte1, parte2, TEMP, RESULTADO;
    int contador = 0;

    printf("Digite um numero na ordem de milhar (4 digitos) para verificar se possui a mesma caracteristica\n");
    printf("NUMERO A SER VALIDADO: ");
    scanf("%d", &VALOR);
    TEMP = VALOR;
    while (TEMP != 0)
    {
        TEMP = TEMP / 10;
        contador++;
    }
    if (contador == 4)
    {
        parte1 = VALOR / 100;
        parte2 = (VALOR % 100);

        RESULTADO = (parte1 + parte2) * (parte1 + parte2);
        printf("Resultado do calculo igual enunciado: %d\n", RESULTADO);
        if (RESULTADO == VALOR)
        {
            printf("O numero %d tambem possui a mesma caracteristica\n", VALOR);
        }
        else
        {
            printf("O numero %d nao possui a mesma caracteristica\n", VALOR);
        }
    }
    else
    {
        printf("Numero informado nao atende ao requisito de 4 digitos!\n");
    }
}

int main()
{

    int OPCAO;

    printf("O numero 3025 possui a seguinte caracteristica: 30 + 25 � igual 55, E 55 ao quadrado � igual a 3025\n");
    printf("Digite a opcao que deseja: \n");
    printf("\t 1 - Verificar se o numero indicado apresenta a mesma caracteristica\n");
    printf("\t 2 - Verificar todos os numeros que atendem a mesma caracteristica\n");
    printf("OPCAO: ");
    scanf("%d", &OPCAO);
    switch (OPCAO)
    {
    case 1:
        verificar_unico();
        break;
    case 2:
        verificar_todos();
        break;
    default:
        printf("Opcao invalida. \n");
        break;
    }

    return 0;
}
