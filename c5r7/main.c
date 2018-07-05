#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int zmiany = 0;

    while((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case '.' : ch = '!';
                zmiany++;
                break;
            case '!' : printf("!");
                zmiany++;
                break;
        }
        printf("%c", ch);
    }
    printf("\nLiczba zmian: %d", zmiany);

    getchar();
    getchar();
    return 0;
}
