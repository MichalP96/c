#include <stdio.h>

int main(void)
{

    int i, j;
    int rzad = 5;

    for(i = 1; i <= rzad; i++ )
    {
        for(j = 1; j <= i; j++)
            printf("$");

        printf("\n");
    }


    getchar();
    return 0;
}
