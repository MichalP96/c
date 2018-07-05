#include <stdio.h>

void dzielenie(int n);

int main(void)
{
    int stala;

    printf("Program obliczajacy reszte z dzielenia\n");
    printf("\nPodaj dzielnik (liczba calkowita): ");
    scanf("%d", &stala);

    dzielenie(stala);

    getchar();
    getchar();
    return 0;

}

void dzielenie(int n)
{
    int wynik, dzielna;

    printf("\nPodaj dzielna: ");
    scanf("%d", &dzielna);

    while(dzielna > 0)
    {
        wynik = dzielna % (int)n;
        printf("\n%d %% %d wynosi %d\n", dzielna, n, wynik);
        printf("Podaj dzielna (<= 0, aby zakonczyc): ");
        scanf("%d", &dzielna);
    }
    printf("\nKoniec\n");

}
