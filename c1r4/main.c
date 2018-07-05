#include <stdio.h>


int main(void)
{
    char imie[20];
    char nazwisko[20];

    printf("Podaj imie i nazwisko: \n");
    scanf("%s %s", imie, nazwisko);
    printf("Witaj %s %s", nazwisko, imie);

    getchar();
    getchar();

    return 0;
}
