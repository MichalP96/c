#include <stdio.h>


int main(void)
{
    int liczba;
    int liczbaDOd;

    printf("Podaj liczbe calkowita: \n");
    scanf("%d", &liczba);
    liczbaDOd = 11 + liczba;

    while(liczba < liczbaDOd)
    {
        printf("%5d", liczba);
        liczba++;
    }

    getchar();
    getchar();
    return 0;
}
