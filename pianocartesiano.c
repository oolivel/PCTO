#include <stdio.h>
int main()
{
    int x;
    int y;
    printf("Scrivi la coordinata X di un punto a tua scelta. \n");
    scanf("%d", &x);
    printf("Scrivi la coordinata Y di un punto a tua scelta. \n");
    scanf("%d", &y);
    if(x>=0 & y>=0)
    {
        printf("Il tuo punto si trova nel PRIMO QUADRANTE. \n");
    }
    else if(x<=0 & y>=0)
    {
        printf("Il tuo punto si trova nel SECONDO QUADRANTE. \n");
    }
    else if(x<=0 & y<=0)
    {
        printf("Il tuo punto si trova nel TERZO QUADRANTE. \n");
    }
    else
    {
        printf("Il tuo punto si trova nel QUARTO QUADRANTE. \n");
    }
    return(0);
}