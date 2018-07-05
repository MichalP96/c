#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    printf("Przelicznik cyf w systemie dziesietnym na system szesnasktowy i osemkowy!!!\n");
    printf("Podaj cyfre w systemie dziesietnym: _________ \b\b\b\b\b\b\b\b\b\b\b");
    scanf("%d", &liczba);
    printf("W systemie osemkowym liczba %d rowna sie: %o\n\a", liczba, liczba);
    printf("W systemie szesnastkowym liczba %d rowna sie: %x", liczba, liczba);
    getchar();
    getchar();
    return 0;
}
