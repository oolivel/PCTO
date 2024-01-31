#include <stdio.h>
int main()
{
    int anno;
    printf("Inserisci il tuo anno di nascita. \n");
    scanf("%d", &anno);
    if (anno>= (int)2007)
    {
        printf("BAMBOCCIO RILEVATO! \n");
    }
    else if(anno<= (int)1920)
    {   
        printf("non ci credo mai zi. \n");
    }
    else
    {
        printf("grande bro \n");
    }

    return(0);
}