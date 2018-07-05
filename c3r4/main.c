#include <stdio.h>


int main(void)
{
    float liczba;

    printf("Podaj liczbe zmiennoprzecinkowa: \n");
    scanf("%f", &liczba);
    printf("Wpisano liczbe: %0.1f lub %0.1e\n", liczba, liczba);
    printf("Wpisano liczbe: %+0.3f lub %0.3E\n", liczba, liczba);

    getchar();
    getchar();

    return 0;

}
