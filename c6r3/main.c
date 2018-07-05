#include <stdio.h>

int main(void)
{

    double czasteczkiWlitrze;
    double iloscCzasteczek;
    int objetosc;
    czasteczkiWlitrze = 1000/(3e-23);



    printf("Liczba czasteczek w litrze: %e\n", czasteczkiWlitrze);
    printf("Oblicz ile czastek znajduje sie w podanej objetosci: ____\b\b\b\b\b ");
    scanf("%d", &objetosc);
    iloscCzasteczek = objetosc * czasteczkiWlitrze;
    printf("Liczba czasteczek w %d, to: %e", objetosc, iloscCzasteczek);

    getchar();
    getchar();
    return 0;



}
