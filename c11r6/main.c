#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 8

int main()
{
    int liczby[ROZMIAR];
    int i,k;
    int stan = 1;

    printf("Podaj liczby: ");

    for(i = 1; i <= ROZMIAR; i++)
    {
        scanf("%d", &liczby[i]);
    }

    for(k = ROZMIAR; k >= 1; k-- )
    {

        printf("%d", (liczby[k]));

    }

    getchar();
    getchar();
    return 0;

}
