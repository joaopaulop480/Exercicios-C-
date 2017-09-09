#include <stdio.h>
#include <stdlib.h>
#define juros 0.03

int main()
{
   float duplicata, total;
   int dias;
   printf("Informe o valor da duplicata: ");
   scanf("%f", &duplicata);
   fflush(stdin);
   printf("Informe os dias de atraso: ");
   scanf("%i", &dias);
   total = ((dias * juros) * duplicata) + duplicata;
   printf("Total da duplicata por dia eh %.2f", total);

    return 0;
}
