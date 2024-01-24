#include <stdio.h>
int main()
{
    char c;
    
    printf("inserisci una lettera\n");
    scanf(" %c", &c);
    if (c =='a' ||c == 'e' || c == 'i' || c == 'o' || c == 'u' )
    {
        printf("la lettera è una vocale\n");
    }
    else 
    {
        printf ("la lettera è una consonante\n");
    }




    return(0);
}