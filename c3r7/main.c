#include <stdio.h>
#include <stdlib.h>

int main()
{

    int liczba;
    int parzyste = 0;
    int nparzyste = 0;
    float sump = 0;
    float sumnp = 0;
    int spr;

    printf("Podaj liczby ca³kowite: ");
    scanf("%d", &liczba);

    while((liczba != 0))
    {
        if(liczba % 2 == 0)
        {
            sump += liczba;
            parzyste++;
        }
        else
        {
            sumnp += liczba;
            nparzyste++;
        }

        scanf("%d", &liczba);

        if (liczba == 0)
            break;
    }

    if(parzyste == 0)
       printf("\nBrak liczb parzystych");
    else
        printf("\nLiczby parzyste: %d, srednia: %f\n", parzyste, sump/(float)parzyste);

    if(nparzyste == 0)
       printf("\nBrak liczb nieparzytych");
    else
       printf("\nLiczby nieparzyste: %d, srednia: %f\n", nparzyste, sumnp/(float)nparzyste);




    getchar();
    getchar();
    return 0;
}
