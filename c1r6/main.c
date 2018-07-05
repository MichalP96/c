#include <stdio.h>
#define ROZMIAR 25

int main(void)
{

    int tab[ROZMIAR];
    int liczenie;
    int litera;

    for (litera = 97, liczenie = 0; liczenie <= ROZMIAR; litera++,liczenie++)
    {
        tab[liczenie] = litera;

    }

     for (liczenie = 0; liczenie <= ROZMIAR; liczenie++)
    {
        printf("%c", tab[liczenie]);
    }

    getchar();
    return 0;




}


