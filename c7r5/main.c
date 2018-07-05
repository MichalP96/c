#include <stdio.h>


void zwraca(float n);

int main(void)
{
    float podana;

    printf("Podaj liczbe, ktora zostanie podniesiona do szescianu: \n");
    scanf("%f", &podana);

    zwraca(podana);

    getchar();
    getchar();
    return 0;
}

void zwraca(float n)
{
    float z;
    z = n*n*n;
    printf("Liczba do szescianu: %0.0f", z);
}
