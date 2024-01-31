#include <stdio.h>
int main()
{
    int numero;
    int x = 2;
    int divisori = 0;
    printf("Scrivi un numero per sapere se è un numero primo o no.\n");
    scanf("%d \n", &numero);
    while(x < numero)
    {
        if(numero % x == 0)
        {
            divisori = divisori +1;
        }
        x = x + 1;
    }
    id(divisori == 0)
    {
        printf("Primo \n");
    }
    else
    {
        printf("Non primo \n");
    }
    return(0);
}