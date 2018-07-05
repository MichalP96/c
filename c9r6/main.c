#include <stdio.h>
#include <stdlib.h>

void obliczenie(double i, double j);

int main()
{
    double a, b, stan;


    printf("Podaj liczby: ");
    while(scanf("%lf%lf", &a, &b) ==  2)
    {
    obliczenie(a, b);
    printf("Podaj kolejne liczby: ");
    }
    printf("To nie cyfra. Koniec");


    getchar();
    getchar();
    return 0;
}

void obliczenie(double i, double j)
{
    double roz, wyn, ilocz;

    roz = (i - j);
    ilocz = (i * j);
    wyn = (roz / ilocz);

    printf("Oto wynik: %f\n", wyn);



}

