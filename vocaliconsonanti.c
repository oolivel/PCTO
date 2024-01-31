#include <stdio.h>
void stampaLettera()
{
    char lettera;
    printf("Inserisci una lettera per scoprire se è una vocale o una consonante. \n");
    scanf("%c", &lettera);
    if(lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u')
    {
        printf("La tua lettera è una vocale. \n");
    }
    else if((lettera >= 91 && lettera <= 96) || lettera >= 123 || lettera <= 64)
    {
        printf("Non è una lettera. \n");
    }
    else
    {
        printf("La tua lettera è una consonante. \n");
    }
    
}
int main()
{
    stampaLettera();
    return(0);
}