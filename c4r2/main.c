#include <stdio.h>

 void tekst1(void);
 void tekst2(void);

 int main(void)
 {
     tekst1();
     printf("Panie Janie!\n");
     tekst2();

     getchar();
     return 0;
 }

 void tekst1(void)
 {
     printf("Panie Janie!\n");
 }

 void tekst2(void)
 {
     printf("Rano wstan!\n");
 }
