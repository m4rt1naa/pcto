#include <stdio.h>

int main()
{

 int etamartip;
 printf("inserire età di martip\n");
 scanf(" %d", &etamartip);
 
 int etamartit;
 printf("inserire età di martit\n");
 scanf(" %d", &etamartit);
 int etacla;
 printf("inserire età di cla\n");
 scanf(" %d", &etacla);
 int etaluna;
 printf("inserire età di luna\n");
 scanf(" %d", &etaluna);
 int etaeli;
 printf("inserire età di elisa\n");
 scanf(" %d", &etaeli);
 int etatot= etamartip+ etamartit * etacla - etaluna+ etaeli;
 printf ("l'età totale è %d anni\n ", etatot);
 printf("martina pugliese ha %d anni\n ", etamartip);
 printf ("martina tateo ha %d anni\n ", etamartit);
 printf("claudia ha %d anni\n ", etacla);
 printf("luna ha %d anni\n ", etaluna);
 printf("elisa ha %d anni\n ", etaeli);


 // sommo i numeri in sommaNum
 int sommaNum;
 sommaNum = numero1 + numero2;

 //stampo la somma con le variabili direttamente degli argomenti di printf
 printf("la somma dei numeri inseriti (sommando qui le var) è %d\n", numero1 + numero2);

 //stampo la somma dalla variabile prima definita e in cui prima calcolata
 printf("la somma dei numeri inseriti (con var che gia contiene la somma) è %d\n", sommaNum);

 return(0);
}
