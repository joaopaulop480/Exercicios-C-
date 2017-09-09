/* Exercicio 1

1) Escreva um programa que apresente 04 (quatro) opções na tela, como abaixo:
a) Cálculo da área do triângulo
b) Cálculo da área do círculo
c) Cálculo da área do paralelogramo.
d) SAIR
Ao final, imprimir o resultado na tela a partir da opção escolhida pelo usuário.
Crie um laço de repetição para a validação da entrada dos dados.

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
    do {
    printf("Informe o valor da base do triangulo: ");
    scanf("%f", &base);
    fflush(stdin);
    printf("Informe o valor da altura do triangulo: ");
    scanf("%f", &altura);
    fflush(stdin);
    if ((base <= 0) || (altura <= 0 )) {printf("\nInvalido, digite novamente\n");}
    }while((base <= 0 ) || (altura <= 0));
    area = (base * altura) / 2;
    printf("\n A area do triangulo eh: %.2f", area);
    break;
case 2:
    //Area do circulo
    do {
    fflush(stdin);
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);
    if (raio <= 0) {printf("\nInvalido, digite novamente\n");}
    }while(raio <= 0);
    fflush(stdin);
    area = pi * pow(raio,2);
    printf("\n A area do circulo eh: %.2f", area);
    break;
case 3:
    //Area do paralelograma
    do{
    printf("Informe o valor da base do paralelograma: ");
    scanf("%f", &base);
    fflush(stdin);
    printf("Informe o valor da altura do paralelograma: ");
    scanf("%f", &altura);
    fflush(stdin);
    if ((base <= 0) || (altura <= 0 )) {printf("\nInvalido, digite novamente\n");}
    }while((base <=0) || (altura <= 0));
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

*/
/* Exercicio 2
2) Escreva um programa que leia um número real referente ao valor de uma duplicata e um número inteiro referente aos dias de atraso no pagamento.
 Ao final, calcule e exiba o valor dos juros a pagar, considerando que o valor dos juros de mora diária é igual a 0,3% por dia de atraso.
 Repita o procedimento para 09 duplicatas.

#include <stdio.h>
#include <stdlib.h>
#define juros 0.03
int main(){

    float duplicata, valorJuro;
    int dias, i;
    for (i=1; i<=9; i++){
    printf("Informe o valor da duplicata: ");
    scanf("%f", &duplicata);
    fflush(stdin);
    printf("Informe os dias de atraso: ");
    scanf("%i", &dias);
    valorJuro = ((dias * juros) * duplicata);
    printf("Total do Juros a pagar eh %.2f\n", valorJuro);
    }





    return 0;

}
*/
/* Exercicio 3

3) Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem, os tempos registrados em cada volta.
Fazer um programa em C para ler os tempos das N voltas. Calcular e imprimir:
a) melhor tempo;
b) a volta em que o melhor tempo ocorreu;
c) tempo médio das N voltas.

#include <stdio.h>
#include <stdlib.h>

int main(){

    float tempoVolta = 1.0, melhorTempo = 0.0 , tempoMedio;
    int nVoltaRapida, contador = 0;

    while (tempoVolta != 0) {
        printf("Informe o tempo da volta em segundos , informe '0'(zero) para sair:  ");
        scanf("%f", &tempoVolta);

        if(tempoVolta < 0) {
            printf("Informacao Invalida\n");
            continue;
        }
        if (tempoVolta == 0){
            break;
        }
    contador++;
    if ((tempoVolta <= melhorTempo) || (melhorTempo == 0.0)){
        melhorTempo = tempoVolta;
        nVoltaRapida = contador;
    }

    tempoMedio += tempoVolta;


    }
    tempoMedio = tempoMedio / contador;

    printf("-------Resultados----------\n\n");
    printf("Melhor tempo: %f\n", melhorTempo);
    printf("Volta mais rapida: %i\n", nVoltaRapida);
    printf("Tempo medio: %.2f", tempoMedio);



    return 0;
}

*/
/* Exercicio 5

Fazer um programa em C para ler vários números inteiros (declarar) e positivos (validar) e calcular a média.
Imprimir também o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, contador = 0, maiorNumero = 0;
    float media = 0;

    do {
            printf("Informe um numero inteiro e positivo, digite zero (0) para sair: ");
            scanf("%i", &n);
            if (n<0) {
                printf("Valor invalido\n");
                continue;
            }
            if (n == 0){
                break;
            }
            contador++;
            media+= n;
            if (n > maiorNumero){
                maiorNumero = n;
            }

    }while(n != 0);

    media = media / contador;
    printf("-------Resultados----------\n\n");
    printf("Media: %.2f\n", media);
    printf("Maioir numero: %i\n", maiorNumero);



    return 0;

}
*/
/* Exercicio 6

6) Faça o programa que apresente a seguinte saída no console (tela), perguntando ao usuário o número máximo (no exemplo, 9).
Este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
2 3 4 5 6 7 8 9
3 4 5 6 7 8 9
4 5 6 7 8 9
5 6 7 8 9
6 7 8 9
7 8 9
8 9
9

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, ok = 0, num;

    while(ok != 1){
    printf("Insira um numero impar: ");
    scanf("%i", &num);

    if (num%2 != 0){
        ok = 1;
    }
    }
    printf("\n\n\n");

   for (j=0; j<num; j++){
        for (i= 1 + j; i <= num; i++){
            printf("%d ", i);
        }
        printf("\n");
   }





    return 0;
}
*/
/* Exercicio 7
Escreva um programa que leia 3 notas de 5 alunos e a média das notas dos exercícios realizados por eles.
Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7.
A variável ME refere-se a nota dos exercícios.

#include <stdio.h>
#include <stdlib.h>

int main(){

    int aluno[5];
    int i,j;
    float media[5], nota[3], mediaExercicio[5];

    for (i=1; i<=5; i++){
      for (j=1; j<= 3; j++){
        printf("Informe a nota %i do aluno %i: ", j,i);
        scanf("%f", &nota[j]);
      }
       printf("Informe a media dos exercicios do aluno %i: ", i);
       scanf("%f", &mediaExercicio[i]);
       media[i] = (nota[1] + (nota[2] * 2) + (nota[3] * 3) + mediaExercicio[i]) /7 ;
    }
    for (i=1; i<= 5; i++ ){
        printf("Aluno %i, media: %.2f \n\n", i, media[i]);
    }

        return 0;
}

*/
/*Exercicio 8
#include <stdio.h>
#include <stdlib.h>

int main(){
    int  anos = 0;
    float a=80000, b=200000;
    do
    {
        anos++;
        a *= 1.04;
        b *= 1.013;
        printf("Ano %i \n", anos);
        printf("Populacao pais A: %.2f \n", a);
        printf("Populacao pais B: %.2f \n", b);

    }while(a < b);
    printf("A quantidade de anos necessarios sao: %i ", anos);



return 0 ;
}
*/
/*Exercicio 9

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, impar = 0, par = 0;

    do{
        printf("Informe um numero: ");
        scanf("%i", &num);
        if( num % 2 == 0){
        par+= num;
        }else{
        impar++;
        }
    }while((par < 500 ) && (impar < 10));

    printf("Soma dos pares: %i\n", par);
    printf("Numero de impares: %i\n", impar);




return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, aleatorio, mim = 0, max = 1000;
    srand(time(0));
    aleatorio = rand() % 1000 ;

    do{
            printf("Informe um palpite de %i a %i:  ", mim, max);
            scanf("%i", &num);
    if (num == aleatorio){
        printf("Parabens voce ganhou\n");
    }else if(num > aleatorio){
        printf("Valor alto\n");
        max = num;
    }else{
        printf("valor baixo\n");
        mim = num;
    }

    }while(num != aleatorio);



    return 0;
}
