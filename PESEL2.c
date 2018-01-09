#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
  int a, b, c, d, e, f, g, h, i, j, k, sum, wynik;
  char Pesel[12];
  printf("\n  \n");
	printf("  ************************************************************\n");
	printf("  *|                                                        |*\n"); 
	printf("  *|              PROGRAM   **PESEL*** INFORMATYKA          |*\n");
	printf("  *|                     nr. albumu 118807                  |*\n");
	printf("  *|                      WSPol 2017/2018                   |*\n");
	printf("  ************************************************************\n");
	printf("\n");
  
  // wpisuje nr PESEL
  printf("Podaj nr PESEL: ");  
  scanf("%s",Pesel);

  // nadaje zmiennym odpowiednie wartosci
  a=Pesel[0] - '0';
  b=Pesel[1] - '0';
  c=Pesel[2] - '0';
  d=Pesel[3] - '0';
  e=Pesel[4] - '0';
  f=Pesel[5] - '0';
  g=Pesel[6] - '0';
  h=Pesel[7] - '0';
  i=Pesel[8] - '0';
  j=Pesel[9] - '0';
  k=Pesel[10] - '0';

  // obliczam
  sum=1*a+3*b+7*c+9*d+1*e+3*f+7*g+9*h+1*i+3*j;
  wynik=10-(sum%10);

  // wyœwietlam komunikat odnosnie poprawnosci wpisanego peselu
  if(wynik==k) {printf("\n\n PESEL jest poprawny.\n\n");} else printf("\n\nPESEL jest bledny!\n\n");

  if (Pesel[9]&1) 
     printf(" PESEL jest mezczyzny.\n\n\n");
  else 
     printf(" PESEL jest kobiety.\n\n\n");
 
  system("PAUSE");

  return 0;
}
