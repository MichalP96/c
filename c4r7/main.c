#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int zmiany = 0;

    while((ch = getchar())!= '#')
    {
        if(ch == '.')
        {
            ch = '!';
            zmiany++;
            printf("%c", ch);
        }
        else if(ch == '!')
        {
            printf("!");
            zmiany++;
            printf("%c", ch);
        }


    }
    printf("\nliczba zmian: %d", zmiany);

    getchar();
    getchar();
    return 0;
}
