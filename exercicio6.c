/*Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi escolhido
através de perguntas e respostas. Animais possíveis: leão, cavalo, homem, macaco avestruz
pinguim e pato. Utilize a estrutura de múltipla escolha e a seguinte classificação:*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int OPCAO;

    printf("Digite a opacao abaixo que o seu animal se enquadra: \n");
    printf("\n\t 1 - Mamimefero");
    printf("\n\t 2 - Aves");
    printf("\n OPCAO: ");
    scanf("%d", &OPCAO);
    switch(OPCAO){
    case 1:
        printf("Digite a opacao abaixo que o seu MAMIFERO se enquadra: \n");
        printf("\n\t 1 - Quadrupede\n");
        printf("\n\t 2 - Bipede\n");
        printf("\n OPCAO: ");
        scanf("%d", &OPCAO);
        switch(OPCAO){
        case 1:
            printf("Digite a opacao abaixo que o seu MAMIFERO QUADRUPEDE se enquadra: \n");
            printf("\n\t 1 - Carnivoro\n");
            printf("\n\t 2 - Hebivoro\n");
            printf("\n OPCAO: ");
            scanf("%d", &OPCAO);
            switch(OPCAO){
            case 1:
                printf("O seu animal eh o leao.\n");
                break;
            case 2:
                printf("O seu animal eh o cavalo. \n");
                break;
            default:
                printf("Opcao invalida");
            }
            break;
        case 2:
            printf("Digite a opacao abaixo que o seu MAMIFERO BIPEDE se enquadra: \n");
            printf("\n\t 1 - Onivoro\n");
            printf("\n\t 2 - Frutifero\n");
            printf("\n OPCAO: ");
            scanf("%d", &OPCAO);
            switch(OPCAO){
            case 1:
                printf("O seu animal eh o homem.\n");
                break;
            case 2:
                printf("O seu animal eh o macaco. \n");
                break;
            default:
                printf("Opcao invalida");
            }
            break;
            break;
        default:
            printf("Opcao invalida!\n");
        }
        break;
    case 2:
        printf("Digite a opacao abaixo que a sua AVE se enquadra: \n");
        printf("\n\t 1 - Nao-voadora\n");
        printf("\n\t 2 - Nadadora\n");
        printf("\n OPCAO: ");
        scanf("%d", &OPCAO);
        switch(OPCAO){
        case 1:
            printf("Digite a opacao abaixo que o seu MAMIFERO NAO-VOADORA se enquadra: \n");
            printf("\n\t 1 - Tropical\n");
            printf("\n\t 2 - Polar\n");
            printf("\n OPCAO: ");
            scanf("%d", &OPCAO);
            switch(OPCAO){
            case 1:
                printf("O seu animal eh o avestruz.\n");
                break;
            case 2:
                printf("O seu animal eh o pinguim. \n");
                break;
            default:
                printf("Opcao invalida");
            }
            break;
        case 2:
            printf("O seu animal eh o pato.\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
        break;
    default:
        printf("Opcao invalida!\n");
    }


return 0;
}
