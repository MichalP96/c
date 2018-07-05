#include <stdio.h>


int main()
{
    int potegi[8];
    int i;
    int cyfra = 2;

    for(i = 0; i < 8; i++)
    {
        potegi[i] = cyfra*(i+1);

    }

    for (i = 0; i < 8; i++)
        printf("%d ", potegi[i]);

    getchar();
    return 0;
}
