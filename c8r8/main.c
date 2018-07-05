#include <stdio.h>

float dodawanie(void);
float odejmowanie(void);
float mnozenie(void);
float dzielenie(void);
char pobierz_wyb(void);// sprawdza czy zostala podana litera do menu
int pobierz_int(void); //sprawdza czy podana zostala cyfra do obliczen
char pobierz_pierwszy(void);
























float dodawanie()
{
    int a, b;// a- liczba pierwsza, b- liczba druga
    float wynik;

    printf("\nPodaj pierwsza liczbe: ");
    a = pobierz_int();
    printf("\nPodaj druga liczbe: ");
    b = pobierz_int();

    wynik = (a+b);

    while(getchar() != '\n') //zabezpieczenie
        continue;

}

int pobierz_int()
{
    char ch;
    int we;

    while(scanf("%d",&we) != 1)
    {
        while((ch=getchar()) != '\n')
            putchar(ch);
            printf()
    }
}
