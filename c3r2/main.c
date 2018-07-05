#include <stdio.h>

int main(void)
{
    int wiek_lata, wiek_tygodnie, wiek_dni;
    wiek_lata = 21;
    wiek_tygodnie = wiek_lata * 52;
    wiek_dni = wiek_tygodnie * 7;

    printf("Wiek w latach: %d\nWiek w tygodniach: %d\nWiek w dniach: %d\n",
            wiek_lata, wiek_tygodnie, wiek_dni);

    getchar();
    return 0;

}
