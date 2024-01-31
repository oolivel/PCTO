#include <stdio.h>
int main()
{
    int x;
    int y = 2;
    int n = 1;
    printf("Scrivi un numero per sapere se è un numero primo o no.\n");
    scanf("%d \n", &x);
    while(y <= x/2 )
    {
        if(x%y==0)
        {
            n = n +1;
        }
        y = y + 1;
    }
    if(n == 0)
    {
        printf("Primo \n");
    }
    else
    {
        printf("Non primo \n");
    }
    return(0);
}