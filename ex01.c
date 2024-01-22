#include <stdio.h>

int main()
{
 int numero1;
 printf("inserisci un numero\n");
 scanf(" %d", &numero1);
  
 int numero2;
 printf("inserisci un altro numero\n");
 scanf(" %d", &numero2);

 int sommaNum;
 sommaNum = numero1 + numero2;
 
 printf("la somma dei numeri inseriti è ", sommaNum);

 return(0);
}
