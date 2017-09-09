#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numConta, saldoConta, opcao, quant;
    printf("Informe o numero da conta: ");
    scanf("%i", &numConta);
    fflush(stdin);
    printf("Informe o saldo: ");
    scanf("%i", &saldoConta);
    printf("\n-----Menu-----");
    printf("\n1- Depositar\n2- Retirar\nEscolha a operacao desejada: ");
    scanf("%i", &opcao);
    switch(opcao){
case 1:
    fflush(stdin);
    printf("infome a quantia a ser depositada: ");
    scanf("%i", &quant);
    saldoConta +=quant;
    break;
case 2:
    fflush(stdin);
    printf("infome a quantia a ser sacada: ");
    scanf("%i", &quant);
    saldoConta -= quant;
    if (saldoConta < 0){
        saldoConta += quant;
        printf("Valor indisponivel na conta");
    }
    break;
    default:
    printf("Opcao invalida");
    }
    printf("\n\n---Saldo---\n%i reais", saldoConta);

    return 0;
}
