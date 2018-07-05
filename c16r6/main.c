#include <stdio.h>



int main(void)
{
   double pieniadzeEwy = 100;
   double sumaPieniedzyEwy;
   double pieniadzeKasi = 100;
   int lata = 0;

   sumaPieniedzyEwy = pieniadzeEwy + (pieniadzeEwy*0.1);
   pieniadzeKasi = pieniadzeKasi + (pieniadzeKasi*0.05);
   lata++;

   while(sumaPieniedzyEwy >= pieniadzeKasi)
   {
       sumaPieniedzyEwy = sumaPieniedzyEwy + (pieniadzeEwy*0.1);
       pieniadzeKasi = pieniadzeKasi + (pieniadzeKasi*0.05);
       lata++;

   }

   printf("Po %d latach, Kasia bedzie miala wiecej pieniedzy %0.2f "
          "niz Ewa %0.2f", lata, pieniadzeKasi, sumaPieniedzyEwy);

   getchar();
   return 0;


}
