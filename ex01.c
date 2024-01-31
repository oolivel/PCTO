#include <stdio.h>

int main()
{
    int eta;
    printf("Inserisci l'età.\n");
    scanf("%d", &eta);
    if(eta >= (int)18)
    {printf("sei maggiorenne. \n");}
    else(eta < (int)18);
    {printf("sei minorenne. \n");}

    return (0);
}