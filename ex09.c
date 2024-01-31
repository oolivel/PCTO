#include <stdio.h>
int main()
{
    int anno;
    int n = 1969;
    printf("In che anno sei nato? Ti dirò quanto tempo passa tra il tuo anno e l'atterraggio sulla Luna del 1969. \n");
    scanf("%d", &anno);
    if(anno==1969)
    {
        printf("Il tuo anno è lo stesso dell'atterraggio sulla Luna! \n");
    }
    else if(anno>1969)
    {
        printf("Il tuo anno è successivo all'atterraggio sulla Luna! \n Sei nato %d anni dopo. \n", (anno-n));
    }
    else
    {
        printf("Il tuo anno è precedente all'atterraggio sulla Luna! \n Sei nato %d anni prima. \n",(n-anno));
    }
    return(0);
}