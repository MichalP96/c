#include <stdio.h>
#define ROZMIAR 255


int main(void)
{
    char znaki[ROZMIAR];
    int i = 0; //indeksowanie tablicy


    printf("Podaj znaki: ");

    scanf("%c", &znaki[i]);
    while(znaki[i] != '\n')
    {

        scanf("%c", &znaki[++i] );
    }

    for(i; i>= 0; i--)
        printf("%c", znaki[i]);









    getchar();
    getchar();
    return 0;
}
