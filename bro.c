#include <stdio.h>

int main()
{

    int x;
    int y;
    
    printf("inserire a quanti anni puoi prendere la patente:\n");
    scanf("%d", &x);
    printf ("inserire quanti anni hai:\n");
    scanf("%d", &y);
    if(x>y)
    {
        printf ("non puoi prendere la patente\n");
    }
    else
    {
        printf("puoi prendere la patente\n");
    }
    
   



return(0);
}