#include <stdio.h>

int main(void)
{
    int centymetry;
    float metry;
    char imie[40];

    printf("Podaj swoje imie i wzrost: \n");
    scanf("%s %d", imie, &centymetry);

    metry = 0.01 * centymetry;

    printf("%s, masz %0.2f metra wzrostu\n", imie, metry);

    getchar();
    getchar();

    return 0;
}
