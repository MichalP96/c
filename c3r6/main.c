#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j;
    int rzad = 6;
    int znak = 'G';

    for(i = 1; i <= rzad; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", znak - j);
        }
        printf("\n");
    }

    getchar();
    return 0;

}
