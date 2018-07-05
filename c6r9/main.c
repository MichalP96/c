#include <stdio.h>
#include <stdlib.h>

void zamiana(double * x, double * y, double * z);

int main()
{
    double a, b, c;

    printf("Podaj wartosc pierwsza: ");
    scanf("%lf", &a);
    printf("\nPodaj wartosc druga: ");
    scanf("%lf", &b);
    printf("\nPodaj wartosc trzecia: ");
    scanf("%lf", &c);

    zamiana(&a, &b, &c);

    printf("\nTeraz pierwsza = %f, druga = %f, trzecia = %f", a, b, c);

    getchar();
    getchar();
    return 0;

}

void zamiana(double * x, double * y, double * z)
{
    double k, l, m;
    k = *x;
    l = *y;
    m = *z;

    if((k < l)&&(k < m))


}
