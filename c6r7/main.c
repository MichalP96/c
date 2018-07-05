#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char biezacy;
    char poprzedni = '\0';
    int ot = 0;





    while((biezacy = getchar())!= '#')
    {

        if(poprzedni == 'o')
        {
            if(biezacy == 't')
            {
                ot++;
            }
        }
        poprzedni = biezacy;


    }
    printf("Ilosc powtorzen \"ot\" : %d", ot);
    getchar();
    getchar();
    return 0;


}
