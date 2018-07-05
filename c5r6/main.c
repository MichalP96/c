#include <stdio.h>
#include <stdlib.h>

int main()
{
    char litera;
    int i, j, k, l;
    char znak = '@';

    printf("Podaj litere: \n");
    scanf("%c", &litera);

    for(i = 1;  i <= (litera - 64); i++ ) //rzedy (poziom) dla i = 1 jest pierwsy rzad
    {
        for(j = 1; j <= ((litera - 64)- i); j++) //odstepy
        {
            printf(" ");
        }

        for(k = 1; k <= i; k++)     //lancuch rosnacy
        {
            printf("%c", (znak + k));


        }

        for(l = 1; l < i; l++) //lancuch malejacy
        {
            printf("%c", (znak + l));
        }
        printf("\n");


    }

    getchar();
    getchar();
    return 0;
}
