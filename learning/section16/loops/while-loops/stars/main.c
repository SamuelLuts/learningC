#include <stdio.h>

int main()
{
    int i = 1, stars;
    printf("Digite a quantidade de estrelas desejadas: \n");
    scanf("%d", &stars);

    while (i <= stars) {
        printf("*");
        i++;
    }
    printf("\n");
   // Or
   while (stars > 0) {
    printf("*");
    stars--;
   }
   return 0;
}