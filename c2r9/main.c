#include <stdio.h>
#include <stdlib.h>

void rzad_zb(char ch, int i, int j);

int main()
{
    int a, b;
    char g;

    printf("Podaj znak: ");
    scanf("%c", &g);
    printf("\nPodaj poczatek: ");
    scanf("%d", &a);
    printf("\nPodaj koniec: ");
    scanf("%d", &b);

    rzad_zb(g,  a, b);

    getchar();
    getchar();
    return 0;
}


void rzad_zb(char ch, int i, int j)
{
    for(i; i < j; i++)
    {
        printf("%c", ch);
    }
}
