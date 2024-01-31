#include <stdio.h>
int main()
{
    int anno;
    printf("Inserisci un anno da te scelto. \n");
    scanf("%d", &anno);
    if(anno%400 == 0 && anno%4 == 0 || anno%100 != 0)
    {
        printf("Il tuo anno è bisestile. \n");
    }
    else
    {
        printf("Il tuo anno non è bisestile. \n)");
    }
    return(0);
}