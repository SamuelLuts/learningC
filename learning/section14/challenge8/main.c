#include <stdio.h>

int main()
{
    int year;
    printf("Digite o valor do ano: \n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Bissexto.\n");
    } else {
        printf("Não é bissexto.\n");
    }
}