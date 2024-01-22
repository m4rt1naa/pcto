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
 
 printf("la somma dei numeri inseriti (sommando qui le var) è %d\n", numero1 + numero2);
 printf("la somma dei numeri inseriti (con var che gia contiene la somma) è %d\n", sommaNum);

 return(0);
}
