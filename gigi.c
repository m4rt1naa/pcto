#include <stdio.h>
int main()
{
    float base;
    float altezza;
    float lato3;
    printf("inserisci lunghezza della base\n");
    scanf ("%f", &base);
    printf("inserisci lunghezza dell'altezza\n");
    scanf("%f", &altezza);
    printf("inserisci lunghezza del lato 3\n");
    scanf("%f", &lato3 );
    float area = base* altezza/2;
    float perimetro = base+ altezza+ lato3;
    printf("il perimetro del triangolo è %f\n", perimetro);
    printf ("l'area del triangolo è %f\n", area);
    


    



    return(0);
}