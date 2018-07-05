#include <stdio.h>

int main(void)
{
    int licznik, suma, podane, sumakw;
    licznik = 0;
    suma = 0;
    sumakw = 0;

    printf("Podaj zakres: \n");
    scanf("%d", &podane);
    while(licznik++ < podane)
    {
        suma = suma + licznik;
        sumakw = suma * suma;
    }
    printf("suma = %d\n", sumakw);

    getchar();
    getchar();
    return 0;

}
