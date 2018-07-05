#include <stdio.h>

int main(void)
{
    int liczba, liczba1, liczba2; //liczba1 to liczba podwojona, liczba2 to liczba do kwadratu
    liczba = 10;
    liczba1 = liczba * 2;
    liczba2 = liczba * liczba;

    printf("Liczba: %d\nLiczba podwojon: %d\nLiczba do kwadratu: %d\n", liczba, liczba1, liczba2);

    getchar();
    return 0;

}

