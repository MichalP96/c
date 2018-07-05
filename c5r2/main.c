#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
    br();
    printf("\b, ");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();


    getchar();
    return 0;
}

void br(void)
{
    printf("Brazylia, Rosja ");
}

void ic(void)
{
    printf("Indie, Chiny ");
}
