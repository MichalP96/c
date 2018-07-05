#include <stdio.h>
#define PODZIAL 7


int main(void)
{
    int tygodnie, dni, dnimod;

    printf("Podaj liczbe dni: \n");
    scanf("%d", &dni);

    while(dni > 0)
    {
        tygodnie = dni/PODZIAL;
        dnimod = dni % PODZIAL;
        printf("%d dni to %d tygodnie, %d dni\n", dni, tygodnie, dnimod);
        printf("Podaj znowu liczbe dni: \n");
        scanf("%d", &dni);
    }

    printf("0 dni ? minus dni ? serio ? .. nie bawie sie tak. Pa!\n");

    getchar();
    getchar();
    return 0;
}
