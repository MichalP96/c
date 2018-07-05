#include <stdio.h>


int main()
{
    int znajomi = 5;
    int tygodnie = 0;

    while(znajomi < 150)
    {
        znajomi = znajomi - (tygodnie + 1);
        znajomi *= 2;
        tygodnie++;

    }
    printf("Po %d tygodniach, Popularny mial %d znajomych powy¿ej 150",
           tygodnie, znajomi);
    getchar();
    return 0;

}
