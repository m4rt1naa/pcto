#include <stdio.h>
int main()
{
    float a;
    float b;
    float c;
    printf("inserire la prima lunghezza\n");
    scanf(" %f", &a);
    printf("inserire la seconda lunghezza\n");
    scanf(" %f", &b);
    printf("inserire la terza lunghezza\n");
    scanf(" %f", &c);
    if(a+b>c && b+c>a && a+c>b)
    {
        printf("i numeri possono essere lunghezze dei lati di un triangolo\n");
    }
    else
    {
        printf("i numeri non possono essere lunghezze dei lati di un triangolo\n");
        return(0);
    }

    if ((a==b) && (a==c) && (b==c))
    {
        printf("il triangolo è equilatero\n");
    }
    else if ((a != b) && (a != c) && (b != c))
    {
        printf("il triangolo è scaleno\n");
    }
    else if ((a == b) && (a != c) && (b != c) || (a == c) && (a != b) && (c != b) || (b == c) && (c != a) && (b != a))
    {
        printf("il triangolo è isoscele\n");
    }
    return(0);

}