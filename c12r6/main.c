#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 8
#define DWA 2


int main()
{
    int tablica[ROZMIAR];
    int i;
    int j = 1;
    int n = 1;

    for(i = 1; i <= ROZMIAR; )
    {

        tablica[i++] = (n*=DWA);
    }

    while(j != ROZMIAR +1)
    {
        printf("%4d", tablica[j++]);
    }
    getchar();
    return 0;
}
