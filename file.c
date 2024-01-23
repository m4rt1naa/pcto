#include <stdio.h>

int main()
{

    float Celsius;
    float Kelvin;
    float Farenheit;
    Kelvin=Celsius+ 273,15;
    Farenheit= 9/5 * Celsius +32;
    
    printf("inserire la temperatura in Celsius:\n");
    scanf("%f", &Celsius);
    
    
    if(Celsius < -273.15)
    {
        printf ("ERRORE\n");
    }
    else
    {
         
         printf ("la temperatura in Klevin è %f\n, la temperatura in Farenheit è %f\n", Kelvin, Farenheit);
        // printf("la temperatura in Farenheit è %f\n" Farenheit);
    }
    
   



return(0);
}