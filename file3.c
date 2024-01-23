#include <stdio.h>
int main()
{
    float x;
    float y;
    float z;


    printf("inserisci un numero\n");
    scanf(" %f", &x);
    printf("inserisci un secondo numero\n");
    scanf(" %f", &y);
    printf("inserisci un terzo numero\n");
    scanf(" %f", &z);


    if(x+y>z && x+z>y && y+z>x)
    {
        printf("i numeri possono essere lunghezze dei lati di un triangolo\n");
    }
    else
    {
        printf("i numeri non possono essere lunghezze dei lati di un triangolo\n");
    }




    return(0);
}
    