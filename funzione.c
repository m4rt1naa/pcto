#include <stdio.h>
void somma() //(int x, int y)
{
    int x;
    int y;
    int somma = x+y;
    printf("il risultato della somma è %d\n", somma);
}
void differenza() 
{
    int x;
    int y;
    int differenza = x-y;
    printf("il risultato della differenza è %d\n", differenza);
}
void moltiplicazione() 
{
    int x;
    int y;
    int moltiplicazione = x*y;
    printf("il risultato della moltiplicazione è %d\n", moltiplicazione);
}

void divisione()
{
    int x;
    int y;
    int divisione = x/y;
    printf("il risultato della divisione è %d\n", divisione);
}
int main()
{
    int x;
    int y;
    int operazione;
    
    printf("inserisci x\n");
    scanf("%d", &x);
    printf("inserisci y\n");
    scanf("%d", &y);
    printf("inserisci l'operazione che vuoi fare\n");
    printf("digita:\n 1 per la somma\n 2 per la sottrazione\n 3 per la moltiplicazione\n 4 per la divisione\n");
    scanf("%d", &operazione);
    if (operazione == 1)
    {
        somma(x, y);
    }
    else if (operazione == 2)
    {
        differenza(x, y);
    }
    else if(operazione == 3)
    {
        moltiplicazione(x, y);
    }
    else if(operazione == 4)
    {
        divisione(x, y);
    }
    


}

