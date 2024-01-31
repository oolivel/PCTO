#include <stdio.h>
#include <math.h>
int main()
{
    int n1;
    int n2;
    int n3;
    int p;
    int A;
   
    printf("Inserisci le dimensioni dei tre lati di un triangolo qualsiasi. \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    printf("Il perimetro del triangolo è: %d. \n", n1+n2+n3);
    p= (n1+n2+n3)/2;
    A= p*(p-n1)*(p-n2)*(p-n3); 
    printf("L'area del triangolo è: %f. \n", sqrt (A));
    return(0);
}