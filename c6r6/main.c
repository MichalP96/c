#include <stdio.h>
#include <stdlib.h>

int main()
{
    long gora, dol, kw, sze;

    printf("Program wyswietla tabele liczb calkowitych "
           "jej kwadrat oraz szescian.\n");
    printf("Podaj zakres tabeli\n");
    printf("Gora: , Dol: \n");
    scanf("%ld%ld", &gora, &dol);

    for(gora; gora <= dol; gora++)
    {
        kw = gora * gora;
        sze = gora * gora* gora;
        printf("%5d   |%5d  |%5d", gora, kw, sze);
        printf("\n");

    }



    getchar();
    getchar();
    return 0;
}
