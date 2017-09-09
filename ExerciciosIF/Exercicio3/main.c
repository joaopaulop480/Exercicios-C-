#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416
#include <math.h>
int main()
{
    int opcao;
    float area, raio;
    float base, altura;
    printf("\n-----Menu-----\n 1- Calcular area de um triangulo \n 2- Calcular area de um circulo \n 3- Calcular a area de um paralelograma \n 4- Sair \nEscolha a opcao necessaria: ");
    scanf("%i", &opcao);
    fflush(stdin);

    switch(opcao){
case 1:
    //Area do triangulo

    printf("Informe o valor da base do triangulo: ");
    scanf("%f", &base);
    fflush(stdin);
    printf("Informe o valor da altura do triangulo: ");
    scanf("%f", &altura);
    fflush(stdin);
    area = (base * altura) / 2;
    printf("\n A area do triangulo eh: %.2f", area);
    break;
case 2:
    //Area do circulo

    fflush(stdin);
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    fflush(stdin);
    area = pi * pow(raio,2);
    printf("\n A area do circulo eh: %.2f", area);
    break;
case 3:
    //Area do paralelograma
    printf("Informe o valor da base do paralelograma: ");
    scanf("%f", &base);
    fflush(stdin);
    printf("Informe o valor da altura do paralelograma: ");
    scanf("%f", &altura);
    fflush(stdin);
    area = base * altura;
    printf("\n A area do paralelograma eh: %.2f", area);
    break;
case 4:

    printf("\nVoce saiu\n");
    break;
default:
    printf("\nOpcao invalida\n");
    }

    return 0;
}
