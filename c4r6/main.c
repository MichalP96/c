#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    int rzad = 6;
    int znak = 'A';

    for(i = 1; i <= rzad; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c", znak);
            znak++;

        }
        printf("\n");
    }

    getchar();
    return 0;
}
