#include <stdio.h>

void factorize(int num)
{
    int prime = 2;
    printf("%d = ", num);
    while (num > 1)
    {
        if (num % prime == 0)
        {
            num /= prime;
            if (num > 1)
            {
                printf("%d * ", prime);
            }
            else
            {
                printf("%d.\n", prime);
            }
        }
        else
        {
            prime++;
        }
    }
}

int main()
{
    printf("Fatorizador [Digite 0 ou um número negativo para finalizar o programa.]\n");
    int num;
    do
    {
        printf("Digite um número: ");
        scanf(" %d", &num);
        if (num > 0)
        {
            factorize(num);
        }
    } while (num >= 1);
    printf("Programa finalizado.\n");
    return 0;
}