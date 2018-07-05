#include <stdio.h>
#include <stdlib.h>

void dzialanie(double i, double j);
int main()
{
    double a, b;    //a,b podane przez uzytkownika krance przedzialu

    printf("Podaj dolna i gorna granice przedzialu liczb calkowitych: ");
    scanf("%lf%lf", &a, &b);
    while(a != b, a < b)
    {

            dzialanie( a, b);
            printf("Podaj nastepny przedzial: ");
            scanf("%lf%lf", &a, &b);

    }
    printf("Koniec");

    getchar();
    getchar();
    return 0;

}


void dzialanie(double i, double j) //i j to a,b przekazane do funkcji
{
    double suma, kwadrat,granic1, granic2;
    granic1 = i*i;               //granice - granice do kwadratu
    granic2 = j*j;

     for(i,j;i <= j; i++)
    {
        kwadrat = i*i;
        suma += kwadrat;
    }
    printf("Suma kwadratow od %lf do %lf to: %lf\n", granic1, granic2, suma);

}
