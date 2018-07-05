#include <stdio.h>

int main(void)
{
    char imie[40];
    char nazwisko [40];

    printf("Podaj imie i nazwisko\n");
    scanf("%s %s", &imie, &nazwisko);


    printf("%-10s%10s\n", imie, nazwisko);
    printf("%d %13d\n", strlen(imie), strlen(nazwisko));

    getchar();
    getchar();

    return 0;
}
