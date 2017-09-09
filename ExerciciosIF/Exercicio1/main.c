#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b ;
  printf("Informe o primeiro numero('a'): ");
  scanf("%i", &a);
  fflush(stdin);
  printf("\nDigite o segundo numero('b'): ");
  scanf("%i", &b);
  printf("Ordem crescente: \n");
  if(a>b) {
    printf("\n%i\n%i", a,b);

  }else{
  printf("\n%i\n%i", b,a);
  }
}
