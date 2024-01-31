#include <stdio.h>
int main ()
{
    int n1;
    int n2;
    int n3;
    printf("Scrivi 3 numeri per sapere se sono in progressione aritmetica. \n");
    printf("Scrivi il primo numero. \n");
    scanf("%d", &n1);
    printf("Scrivi il secondo numero. \n");
    scanf("%d", &n2);
    printf("Scrivi il terzo numero. \n");
    scanf("%d", &n3);
    if(n3-n2==n2-n1)
    {
        printf("I numeri da te scelti sono in progressione aritmetica. \n");
    }
    else
    {
        printf("I numeri da te scelti non sono in progressione aritmetica. \n");
    }
    return(0);
}