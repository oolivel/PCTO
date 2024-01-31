#include <stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    printf("Scrivi tre numeri per sapere se possono formare un triangolo. \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if(n1+n2 > n3 && n2+n3 > n1 && n3+n1 >n2)
    {
        printf("I tre numeri possono formare un triangolo. \n");
    }
    else
    {
        printf("I tre numeri non possono formare un triamgolo. \n");
    }
    return(0);
}