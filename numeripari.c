#include <stdio.h>
void controlloPari(int x)
{
    if(x%2==0)
    {
        printf("Il numero è pari. \n");
    }
    else
    {
        printf("Il numero è dispari. \n");
    }
}
int main()
{
    int x;
    printf("Inserisci un numero e scopri se è pari o dispari. \n");
    scanf("%d", &x);
    controlloPari(x);
    return(0);
}