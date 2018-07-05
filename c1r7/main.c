#include <stdio.h>

int main(void)
{
    char ch;
    int spacja = 0;
    int nowywiersz = 0;
    int inneznaki = 0;
    printf("Podaj dane wejœciowe: # - konczy zabawe: ");

    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
            spacja++;
        if(ch == '\n')
            nowywiersz++;
        else
            inneznaki++;
    }
    printf("%d spacje, %d nowe wiersze, %d inne znaki", spacja, nowywiersz, inneznaki);

    getchar();
    getchar();


    return 0;
}
