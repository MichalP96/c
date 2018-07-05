#include <stdio.h>

int main(void)
{
    char imie[40];

    printf("Jak sie nazywasz?\n", imie);
    scanf("%s", imie);
    printf("\"%s\"\n", imie);
    printf("\"%                    20s\"\n", imie);
    printf("\"%-20s\"\n", imie);
    printf("\"%s   \"\n", imie);

    getchar();
    getchar();
    return 0;
}
