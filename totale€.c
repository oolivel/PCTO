#include <stdio.h>
int main()
{
    int num;
    while(num>0)
    {
    printf("Numero pezzi ordinati. \n");
    scanf("%d", &num);
    printf("Il numero di pezzi è %d. \n", num);    
    if(num<=30 & num>0)
    {
        printf("Totale è %d€. \n", num*5);
    }
    else if(num<=50 & num>0)
    {
        printf("Totale è %d€. \n", (num*5-(num*5*10/100)));
    }
    else if(num>50)
    {
        printf("Totale è %d€. \n", (num*5-(num*5*15/100)));
    }
    else if(num<=0)
    {
        printf("Error. \n");
    }
    }
    return(0);
}