#include <stdio.h>
int main()
{
    int x;
    printf("inserisci un anno\n");
    scanf("%d", &x);
    if(x%400 && x%4 ==0 && x%100!=0)
    {
        printf("l'anno è bisestile\n");
    }
    else
    {
        printf("l'anno non è bisestile\n");
    }




    return(0);
}
    