#include <stdio.h>
int main()
{
    int numero;
    
    printf("inserisci un numero\n");
    scanf("%d", &numero);
    int numero2 = numero - 1;

    while (numero % numero2 == 0)
    {
        numero2 - 1;
        
    }
    return(0);
}