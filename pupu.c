#include <stdio.h>
int main()
{
    int x = 5;
    int y;
    int z;
    float sconto1;
    float sconto2; 
    printf("inserisci il numero di prodotti da acquistare\n");
    scanf(" %d", &y);
   while (y>0)
   {
    z = y*x;
    //sconto è (z*10)/100
    consconto1 = z-(z*10/100);
    consconto2 = z- (z*15/100);
    if (y<30 && y>0)
    {
        printf ("il costo totale è %d\n" , z);
    }
    else if (y>30 & y<50)
    {
        printf("il costo totale è %f\n", sconto1);
    }
    else if (y>50)
    {
        printf("il costo totale è %f", sconto2);
    }
    printf("inserisci il numero di prodotti da acquistare\n");
    scanf(" %d", &y);
    //se non rimetti il printf e lo scanf si ripete all'infinito
    
    }
    return(0);
}



    
