#include <stdio.h>
#include <stdlib.h>
#define PODSTAWA 40
#define BONUS 60

void PensjaZNadgodzinami(float a); // oblicza  pensje brutto z nadgodzinami



int main()
{
    int godziny;
    float wyplata;


    printf("Podaj ilosc godzin przepracowanych: ");
    scanf("%d", &godziny);
    while(godziny > 0)
    {

        if(godziny > 40)
        {
           PensjaZNadgodzinami(godziny);
           break;
        }
        else
        {
           wyplata = godziny*PODSTAWA;
           printf("\Pensja brutto wynosi %f", wyplata);
           break;
        }
    }

    getchar();
    getchar();
    return 0;
}


void PensjaZNadgodzinami(float a)
{
    float brutto;
    int nadgodziny;
    nadgodziny = (a-40);
    brutto = ((40*PODSTAWA)+(nadgodziny*BONUS));
    printf("\nPensja brutto wynosi: %f", brutto);


}


