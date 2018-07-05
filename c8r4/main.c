#include <stdio.h>
#define galon 3.785
#define km 1.609

int main(void)
{

    float mile, galony;
    float zuzycieAme;
    float konwerKM, konwerLITRY, konwertuzycie;


    printf("Podaj liczbe mil i galonow: \n");
    scanf("%f %f", &mile, &galony);

    zuzycieAme = mile / galony;

    printf("Wskaznik zuzycia paliwa po Amerykansku: %0.1f\n", zuzycieAme);

    konwerKM = mile * km;
    konwerLITRY = galony * galon;
    konwertuzycie = konwerLITRY / konwerKM;


    printf("Wskaznik zuzycia paliwa po Europejsku: %0.1f\n", konwertuzycie);

    getchar();
    getchar();

    return 0;


}
