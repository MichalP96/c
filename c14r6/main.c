#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 8

int main()
{
    int tablicaA[ROZMIAR];
    int tablicaB[ROZMIAR];
    int i;  //wrpowadzanie wartosci do tablic
    int suma;
    suma = 0;


    printf("Podaj osiem cyfr: ");

    for(i = 0; i < ROZMIAR; i++ )
    {
        scanf("%d", &tablicaA[i]);


    }

    printf("\nOto wyniki: \n");
    for(i = 0; i <  ROZMIAR; i++)
    {
        suma += tablicaA[i];
        tablicaB[i] = suma;

    }

    printf("TablicaA: ");
    for(i = 0; i < ROZMIAR; i++)
    {
        printf("%4d", tablicaA[i]);
    }

    printf("\nTablicaB: ");
    for(i = 0; i < ROZMIAR; i++)
    {
        printf("%4d", tablicaB[i]);
    }

    getchar();
    getchar();
    return 0;
}

