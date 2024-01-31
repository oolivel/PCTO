#include <stdio.h>
void stampaCubo()
{
    int numero;
    int cubo;

    printf("Scrivi un numero. \n");
    scanf("%d", &numero);
    cubo = numero * numero * numero;
    printf("Il cubo di %d è %d. \n", numero, cubo);
}
int main()
{
    stampaCubo();
    printf("Ciao");
    stampaCubo();
    stampaCubo();
    stampaCubo();
    printf("Fine");

    return(0);
}