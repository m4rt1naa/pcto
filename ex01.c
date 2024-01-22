#include <stdio.h>

int main()
{
 //definisco il primo numero e lo chiedo all'utenti
 int numero1;
 printf("inserisci un numero\n");
 scanf(" %d", &numero1);
  
 //definisco il secondo numero e lo chiedo all'utenti
 int numero2;
 printf("inserisci un altro numero\n");
 scanf(" %d", &numero2);

 // sommo i numeri in sommaNum
 //int sommaNum;
 //sommaNum = numero1 + numero2;

 //stampo la somma con le variabili direttamente degli argomenti di printf
 printf("la somma dei numeri inseriti (sommando qui le var) è %d\n", numero1 + numero2);

 //stampo la somma dalla variabile prima definita e in cui prima calcolata
 //printf("la somma dei numeri inseriti (con var che gia contiene la somma) è %d\n", sommaNum);

 return(0);
}
