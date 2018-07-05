#include <stdio.h>
#include <stdlib.h>

double min(double x, double y);



int main()
{
    double a, b;
    double mniejsza = 0;

    printf("Podaj liczbe a: ");
    scanf("%lf", &a );
    printf("\nPodaj liczbe b: ");
    scanf("%lf", &b);

    mniejsza = min(a,b);

    printf("Cyfra mniejsza to: %f", mniejsza);
    getchar();
    getchar();
    return 0;

}


double min(double x, double y)
{
    if(x < y)
        return x;
    if(x > y)
        return y;
}
