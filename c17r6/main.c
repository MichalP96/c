#include <stdio.h>
#define OPROCENTOWANIE 0.08
#define WYPLATA 100000

int main(void)
{
    double wygrana = 1000000;
    int lata = 0;

    while(wygrana > 0)
    {
        wygrana = wygrana + (wygrana*OPROCENTOWANIE);
        wygrana = wygrana - WYPLATA;
        lata++;
    }
    printf("Po %d latach, Jim nie bedzie mial pieniedzy", lata);

    getchar();
    return 0;
}
