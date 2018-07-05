#include <stdio.h>

int main(void)
{
    float predkosc, megabajty, megabity, czas;

    printf("Podaj rozmiar pliku w megabajtach oraz czas pobierania: \n");
    scanf("%f %f", &megabajty, &predkosc);

    megabity = megabajty * 8;
    czas = megabity / predkosc;

    printf("Przy %0.2f megabitow na sekunde plik o rozmiarze %0.2f megabajta\n",predkosc, megabajty);
    printf("zostanie pobrany w %0.2f sekundy\n", czas);

    getchar();
    getchar();

    return 0;
}
