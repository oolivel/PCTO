#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int numero;
    int indovinato;
    int n = 0;
    while(n<=10)
    {
        srand(time(NULL));
        numero = rand() % 100 + 1;
        printf("BENVENUTO NEL GIOCO DEI NUMERI RANDOM! \n Indovina u numero tra 0 e 100. \n");
        printf("Inserisci il tuo numero: \n");
        scanf("%d", &indovinato);
        if(numero == indovinato)
        {
            printf("Complimenti! Il mio numero era %d \n.", numero);
            n=n+1;
        }
        else
        {
            printf("Ritenta e sarai più fortunato... Il mio numero era %d \n.", numero);
            printf("Il tuo punteggio è %d. \n", n);
        }
    }
    printf("HAI VINTO!");
    return(0);
}