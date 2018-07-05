#include <stdio.h>

int main(void)
{
    char ch;
    int licznik = 0;

    while((ch = getchar()) != '#')
    {

        if((licznik % 8) == 0)
            printf("\n");
        printf("|%c   ->   %d|",ch, ch );
        licznik++;

    }


    printf("\nKoniec");

    getchar();
    getchar();
    return 0;

}
