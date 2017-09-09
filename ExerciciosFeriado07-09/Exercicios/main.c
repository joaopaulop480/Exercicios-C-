#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592654
#define pol 2,54

ex1(){
    float area, raio;
    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);
    area = pi * pow(raio,2);
    printf("\nA area do triangulo eh: %f", area);



}
ex2(){
    float numero;
    do {
    printf("Informe um numero: ");
    scanf("%f", &numero);
    }while(numero <= 0);
    printf("\nQuadrado de %.2f: %.2f\n ", numero, pow(numero,2));
    printf("\nCubo de %.2f: %.2f \n", numero, pow(numero,3));
    printf("\nRaiz quadrada de %.2f: %.2f\n ", numero, sqrt(numero));
}

ex3(){
    float pes, jarda, polegada, milha;
    printf("Informe um valor em pes: ");
    scanf("%f", &pes);
    polegada = (pes * 12);
    jarda = pes / 3;
    milha = jarda / 1760;

    printf("\nmedida em polegada: %.2f\n", polegada);
    printf("Medida em jarda: %.2f\n", jarda);
    printf("Medida em milhas: %.10f\n", milha);


}

ex4(){
    int num1, num2;
    printf("Infome o primeiro numero: ");
    scanf("%d", &num1);
    printf("Infome o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("\n%i\n", num1);
    }else{
        printf("\n%i\n", num2);
    }

}
ex5(){
    float trabalho, avaliacao, exame, media;
    printf("Informe a nota do trabalho: ");
    scanf("%f", &trabalho);
    printf("Informe a nota da avaliacao semestral: ");
    scanf("%f", &avaliacao);
    printf("Informe a nota do exame final: ");
    scanf("%f", &exame);

    media = ((trabalho * 2) + (avaliacao * 3) + (exame * 5)) / 10;



    if(media < 5 ){
        printf("\n\nConceito E\n");
    }else if(media < 6){
        printf("\n\nConceito D\n");
    }else if(media < 7){
        printf("\n\nConceito C\n");
    } else if(media < 8){
        printf("\n\nConceito B\n");
    } else {
        printf("\n\nConceito A\n");
    }


    printf("A media do estudante eh: %f", media);



}

ex6(){
    int dia, mes, ano;
    printf("Infome um dia: ");
    scanf("%i", &dia);
    printf("Infome um numero correspondente ao mes: ");
    scanf("%i", &mes);
    printf("Infome um ano: ");
    scanf("%i", &ano);

    if ((dia > 31) || (dia < 1)){
        printf("Data invalida");
        exit(0);
    }
    if ((mes > 12) || (mes < 1)){
        printf("Data invalida");
        exit(0);
    }
    if (ano < 0){
        printf("Data invalida");
        exit(0);
    }

    switch(mes){
    case 2:
        if ((ano % 4 == 0) && (ano % 100 != 0) && (ano % 400 == 0)){
            if (dia > 29){printf("Data invalida");}
        }else {
            printf("Data correta");}

        if (dia > 28){
                printf("Data invalida");
                break;
        } else {printf("Data correta");
        break;
        }



    case 4:
        if (dia > 30){
            printf("Data invalida");
            break;
        }
    case 6:
        if (dia > 30){
            printf("Data invalida");
            break;
        }
    case 9:
        if (dia > 30){
            printf("Data invalida");
            break;
        }
    case 11:
        if (dia > 30){
            printf("Data invalida");
            break;
        }

    default: printf("Data correta");
    }

}

ex7(){
    float salario;
    int cargo;

    printf("1 - Escrituario \n2 - Secretario \n3 - Caixa \n4 - Gerente \n5 - diretor\n");
    do {
    printf("Informe o codigo do seu cargo: ");
    scanf("%i", &cargo);
    }while((cargo < 1) || (cargo > 5));
    printf("Informe seu salario: ");
    scanf("%f", &salario);
    switch (cargo){
case 1:
    printf("Escrituario\n");
    printf("Valor do aumento: %.2f\n", salario * 0.5);
    printf("Novo salario: %.2f\n",salario * 1.5);
    break;
case 2:
    printf("Secretario\n");
    printf("Valor do aumento: %.2f\n", salario * 0.35);
    printf("Novo salario: %.2f\n", salario * 1.35);
    break;
case 3:
    printf("Caixa\n");
    printf("Valor do aumento: %.2f\n", salario * 0.2);
    printf("Novo salario: %.2f\n", salario * 1.2);
    break;
case 4:
    printf("Gerente\n");
    printf("Valor do aumento: %.2f\n", salario * 0.1);
    printf("Novo salario: %.2f\n", salario * 1.1);
    break;
default:
    printf("Diretor\n");
    printf("Valor do aumento: %.2f\n", salario * 0);
    printf("Novo salario: %.2f\n", salario * 1.0);
    }
}
ex8(){
    int opcao;
    float salario;
    printf("****menu de opcoes****\n");
    printf("1 - Imposto\n2 - Novo salario\n3 - Classificacao\n");
    do{
    printf("Digite a opcao: ");
    scanf("%i", &opcao);
    }while((opcao < 1) || (opcao > 3));

    printf("Digite seu salario: ");
    scanf("%f", &salario);
    switch(opcao){
case 1:
    if(salario > 850){
        printf("Valor do imposto eh: %f", salario * 0.15);
    }else if(salario < 500){
         printf("Valor do imposto eh: %f", salario * 0.05);
    }else{
     printf("Valor do imposto eh: %f", salario * 0.1);
    }
    break;
case 2:
    if (salario > 1500){
        printf("Novo salario eh: %f", salario + 25);

    }else
    if(salario >= 750){
         printf("Novo salario eh: %f", salario + 50);
    }else
    if(salario >= 450){
         printf("Novo salario eh: %f", salario + 75);
    }else{
        printf("Novo salario eh: %f", salario + 100);
    }
    break;
case 3:
    if (salario > 700){
        printf("Bem remunerado");
    }else{
        printf("Mal remunerado");}
    }
}

ex9(){
float salario, auxilio = 0;

printf("Informe seu salario: ");
scanf("%f", &salario);
auxilio = salario > 600 ? 100 : 150;

if (salario > 1200){
    printf("Novo salario eh de %f", salario + auxilio);

}else if(salario > 500){
    printf("Novo salario eh de %f", (salario * 1.12) + auxilio);
    }else { printf("Novo salario eh de %f", (salario * 1.05) + auxilio);}

}

ex10(){
int a, b, c;
float delta;
printf("resolvendo equacao do segundo grau ax^2 + bx + c = 0 \n ");
printf("Informe o valor de a: ");
scanf("%i", &a);
printf("Informe o valor de b: ");
scanf("%i", &b);
printf("Informe o valor de c: ");
scanf("%i", &c);
delta = (pow(b,2) - 4*a*c);
if (delta < 0){
    printf("Nao exite raiz real");

}else if(delta == 0){
    printf("resultado: %f", (-b / (2*a)));
    }else {
    printf("Resultado x1: %f\n resultado x2: %f", ((-b + sqrt(delta))  / (2*a)), ((-b - sqrt(delta))  / (2*a)));
    }
}

ex11(){
    float peso, altura;

    printf("Informe sua altura: ");
    scanf("%f", &altura);
    printf("Informe seu peso: ");
    scanf("%f", &peso);

    if(altura < 1.2){
        if(peso <= 60){
            printf("A");
        }else if(peso <=90){
            printf("D");
        }else{
            printf("G");
        }
    }else if(altura <= 1.7){
        if(peso <= 60){
            printf("B");
        }else if(peso <=90){
            printf("E");
        }else{
            printf("H");
        }
    }else{
        if(peso <= 60){
            printf("C");
        }else if(peso <=90){
            printf("F");
        }else{
            printf("I");
        }
    }
}

int main()
{
    int exercicio;
    do{
    printf("Escolha exercicios de 1 a 11: ");
    scanf("%i", &exercicio);
    }while((exercicio < 0) || (exercicio > 11));
    switch(exercicio){
    case 1:
    ex1();
    break;
    case 2:
    ex2();
    break;
    case 3:
    ex3();
    break;
    case 4:
    ex4();
    break;
    case 5:
    ex5();
    break;
    case 6:
    ex6();
    break;
    case 7:
    ex7();
    break;
    case 8:
    ex8();
    break;
    case 9:
    ex9();
    break;
    case 10:
    ex10();
    break;
    default:
    ex11();
    }
    return 0;
}
