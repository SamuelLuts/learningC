#include <stdio.h>

int main()
{
    int num;
    printf("Digite seu número: ");
    scanf("%i", &num);

    if (num < 0) {
        printf("O valor absoluto do seu número é %i.\n", -num);
    } else {
        printf("O valor absoluto do seu número é %i.\n", -num);
    }

    return 0;
}