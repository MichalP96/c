#include <stdio.h>
#include <float.h>

int main(void)
{
    float cyfra1 = 1.0/3.0;
    double cyfra2 = 1.0/3.0;

    printf("Float rowna sie: \n");
    printf("%0.4f\n", cyfra1);
    printf("%0.12f\n", cyfra1);
    printf("%0.16f\n", cyfra1);

    printf("Double rowna sie: \n");
    printf("%0.4f\n", cyfra2);
    printf("%0.12f\n", cyfra2);
    printf("%0.16f\n", cyfra2);

    printf("Dokladnosc: \n");
    printf("%f\n", FLT_DIG);
    printf("%f\n", DBL_DIG);

    getchar();

    return 0;


}
