#include <stdio.h>

void Temperatura(double argument);

int main(void)
{
    double fahr;
    int stan;

    printf("Podaj stopnie Fahr: ");
    stan =  scanf("%lf", &fahr);

    while(stan == 1)
    {
        Temperatura(fahr);
        printf("\nPodaj znowu stopnie Fahr: ");
        stan = scanf("%lf", &fahr);
    }
    printf("\nto nie cyfra.");
    getchar();
    getchar();

    return 0;


}

    void Temperatura(double argument)
    {
        const double stala1 = 5.0/9.0;
        const double stala2 = 32;
        const double stala3 = 273.16;

        double cel, kel;

        cel = stala1 * (argument - stala2);
        kel = cel + stala3;

        printf("\nOto wyniki konwersji: Fahrenheity: %4.2f, Celsjusze: %4.2f, Kelwiny: %4.2f", argument, cel, kel);
    }
