#include <stdio.h>

int main()
{
    int num, numAnt, pow;
    printf("Digite o número inicial: \n");
    scanf("%d", &num);
    printf("Digite o número elevado: \n");
    scanf("%d", &pow);
    numAnt = num;
    while (pow > 1) {
        printf("%d\n", num);
        num = num * numAnt;
        pow--;
    }
    printf("O valor de %d elevado a %d, é %d.\n", numAnt, pow, num);
}