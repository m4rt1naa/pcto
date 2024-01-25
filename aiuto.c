#include <stdio.h>
#include <math.h>
void radice()
{


}
int main()
{
    float a;
    float b;
    float c;
    printf("inserisci il valore per a\n");
    scanf("%f", &a);
    printf("inserisci il valore per b\n");
    scanf("%f", &b);
    printf("inserisci il valore per c\n");
    scanf("%f", &c);
    if (a==0)
    {
        printf ("%f", (-c/b));

    }
    else if (b*b < 4*a*c)
    {
        printf("non ammette soluzioni reali\n");
    }
    else if(((b*b)-(4*a*b))> 0)
    {
        printf("ammette soluzioni reali\n");
        calcolo (a, b ,c);
    }

    printf ("la radice di %.2f, vale %.2f\n",a, sqrt(a));
    printf ("la radice di %.2f, vale %.2f\n",b, sqrt(b));
    float discriminante = (b*b)-(4*a*c);
    printf("il discriminante è:%f\n", discriminante);
    
    


    

    return(0);
}