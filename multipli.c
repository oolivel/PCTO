#include <stdio.h>
int main()
{
    int numero1;
    printf("Scrivi un numero. \n");
    scanf("%d", &numero1);
    int numero2;
    printf("Scrivi un secondo numero. \n");
    scanf("%d",&numero2);
    if(numero1 % numero2 == 0)
    {
      printf("Sì, è un multiplo. \n");
    }
    else
    {
        printf("No, non è un multiplo. \n");
    }
    return(0);
}