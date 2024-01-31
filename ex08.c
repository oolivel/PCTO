#include <stdio.h>
int main ()
{
    int n1;
    int n2;
    int n3;
    printf("Scrivi tre numeri per sapere se formano un triangolo equilatero, scaleno o isoscele. \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if(n1!=n2 & n2!=n3 & n3!=n1)
    {
        printf("Il triangolo è scaleno. \n");
    }
    else if((n1==n2 & n2!=n3) || (n2==n3 & n3!=n1) || (n1==n3 & n1!=n2))
    {
        printf("Il triangolo è isoscele. \n");
    }
    else if(n1==n2 & n2==n3)
    {
        printf("Il triangolo è equilatero. \n");
    }
    else
    {
        printf("Impossible. \n");
    }
    return(0);
}