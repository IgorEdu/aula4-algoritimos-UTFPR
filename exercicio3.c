/*3. Perguntar ao usuário se ele deseja calcular a área de um:
a. triângulo
b. circulo
c. cubo
d. cilindro
Solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int area_triangulo(int X, int Y){
    int AREA;
    AREA = (X*Y)/2;
    printf("\nA area do triangulo eh: %d", AREA);
    return AREA;
}
int area_circulo(int X){
    int AREA;
    AREA = M_PI * (X * X);
    printf("\nA area do circulo eh: %d", AREA);
    return AREA;
}
int area_cubo(int X){
    int AREA;
    AREA = 6 * (X * X);
    printf("\nA area do cubo eh: %d", AREA);
    return AREA;
}
int area_cilindro(int X, int Y){
    int AREA;
    AREA = ((2*(M_PI*(X*X)))+(2*(M_PI*X*Y)));
    printf("\nA area do cilindro eh: %d", AREA);
    return AREA;
}

int main () {

int AREA, X, Y;
char OPCAO;

printf("Digite a opcao da forma geometrica quer calcular a area: \n");
printf("\t A - Triangulo\n");
printf("\t B - Circulo\n");
printf("\t C - Cubo\n");
printf("\t D - Cilindro\n");
printf("OPCAO: ");
scanf("%c", &OPCAO);
fflush(stdin);

switch(toupper(OPCAO)){
case 'A':
    printf("Para calcular a area do triangulo informe a base e a altura\n");
    printf("BASE: ");
    scanf("%d", &X);
    printf("ALTURA: ");
    scanf("%d", &Y);
    area_triangulo(X, Y);
    break;
case 'B':
    printf("Para calcular a area do circulo informe o raio do circulo\n");
    printf("RAIO: ");
    scanf("%d", &X);
    area_circulo(X);
    break;
case 'C':
    printf("Para calcular a area do cubo informe o valor de uma aresta\n");
    printf("ARESTA: ");
    scanf("%d", &X);
    area_cubo(X);
    break;
case 'D':
    printf("Para calcular a area do cilindro informe o valor do raio do cilindro e a altura do cilindro\n");
    printf("RAIO: ");
    scanf("%d", &X);
    printf("ALTURA: ");
    scanf("%d", &Y);
    area_cilindro(X,Y);
    break;
default:
    printf("Opcao invalida!\n");
}


return 0;
}
