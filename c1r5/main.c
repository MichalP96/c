#include <stdio.h>
#define STALA 60

int main(void)
{
    float minuty, godziny;

    printf("Podaj czas w mintuach: \n");  //najpierw wczytuje liczbe do zmiennej zeby spelnic warunek petli
    scanf("%f", &minuty);



    while(minuty > 0)
    {
        godziny = minuty / STALA;
        printf("Czas to %0.2f minut i %0.2f godzin/y\n", minuty, godziny);
        printf("Podaj czas w minutach: \n"); //powtarza zapytanie ale odbywa sie juz wewnatrz petli
        scanf("%f", &minuty);
    }

    printf("Niestety podales zerowy lub ujemny czas.. wiec klaps");

    getchar();
    getchar();
    return 0;
}
