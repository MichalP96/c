#include <stdio.h>
#include <stdlib.h>


int main()
{
    double a, b, roz, ilocz, wyn; //liczby

    printf("Podaj dwie liczby zmiennoprzecinkowe: ");
    while(scanf("%lf%lf", &a, &b) == 2)
    {
        roz = (a-b);
        ilocz = (a*b);
        wyn = (roz/ilocz);
        printf("\nOto wynik: %f\n", wyn);
        printf("Podaj kolejne liczby: ");
        scanf("%lf%lf", &a, &b);

    }
    printf("\nTo nie jest cyfra. koniec\n");

    getchar();
    getchar();
    return 0;
}

