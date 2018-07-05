#include <stdio.h>
#define STOPY 29.78
#define CALE 2.54

int main(void)
{
    float centymetry, stopyzmi, calezmi;


    printf("Podaj wzrost w centymetrach: \n");
    scanf("%f", &centymetry);

    while(centymetry > 0)
    {
        stopyzmi = centymetry/STOPY;
        calezmi = centymetry/CALE;
        printf("%0.1f cm = %0.0f stop, %0.1f cali\n", centymetry, stopyzmi, calezmi);
        printf("Podaj wzrost w centymetrach (<= 0 - koniec): \n");
        scanf("%f", &centymetry);

    }
    printf("Do widzenia !\n");

    getchar();
    getchar();
    return 0;
}
