#include <stdio.h>

int main()
{

    int x;
    int y;
    
    printf("inserire un numero:\n");
    scanf("%d", &x);
    printf ("inserire secondo numero:\n");
    scanf("%d", &y);
    if(x%y == 0)
    // fai in modo di sostituire x e y con i numeri
    {
        printf ("x è multiplo di y\n");
    }
    else
    {
        printf("x non è multiplo di y\n");
    }
    
   



return(0);
}