#include <stdio.h>
#include <stdlib.h>

int main()
{
    char slowo[40];
    int wspak, wartosc;

    printf("Podaj slowo: ");
    scanf("%s", slowo);
    wartosc = strlen(slowo);

    for(wspak = 0; wartosc >= wspak; wartosc--)
    {
        printf("%c", slowo[wartosc]);
    }


    getchar();
    getchar();
    return 0;
}
