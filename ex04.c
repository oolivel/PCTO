#include <stdio.h>
int main()
{
    float celsius;
    printf("Scrivi la temperatura in Celsius. \n");
    scanf("%f", &celsius);
    float k = 273.15;
    float f1 = 1.8;
    float f2 = 32;
    if (celsius <= -273.15)
    {
        printf("ERROR! \n");
    }
    else
    {
       printf("In kelvin è %f. \n", (celsius + k));
       printf("In Fahrenheit è %f. \n", (f1*celsius+f2)); 
    }
    return(0);
}