#include <stdio.h>
void numeroMaggiore(int x1, int x2)
{
    if(x2>x1)
    {
        printf("Il numero %d è il maggiore. \n", x2);
    }
    else if(x1>x2)
    {
        printf("Il numero %d è il maggiore. \n", x1);
    }
}
int main()
{
    int x1;
    int x2;
    printf("Inserisci due numeri. \n");
    scanf("%d", &x1);
    scanf("%d", &x2);
    numeroMaggiore(x1, x2);
    return(0);
}